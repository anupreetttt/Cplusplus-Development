#include <iostream>
// #include <stdlib.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

// traversing a Link List
void llTraversal(Node *ptr)
{
    while (ptr != NULL) // till node points towards NULL
    {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }
}

Node *insertAtBeginning(Node *head, int data)
{

    Node *ptr = new Node;
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

int main()
{

    // Link list implementaion
    Node *head;   // head is pointing towards first node
    Node *second; // first node is pointing towards second
    Node *third;  // second node is pointing towards third
    Node *fourth;
    Node *inserted;

    head = new Node;
    second = new Node;
    third = new Node;
    fourth = new Node;
    inserted = new Node;

    head->data = 7;
    head->next = second;

    // inserted->data = 6969;
    // inserted->next = second;

    second->data = 213;
    second->next = third;

    third->data = 124;
    third->next = fourth;

    fourth->data = 14;
    fourth->next = NULL;

    llTraversal(head);
    cout << "After insertion -->" << endl;
    head = insertAtBeginning(head, 9696);
    llTraversal(head);

    return 0;
}