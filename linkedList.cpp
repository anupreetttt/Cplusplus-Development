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

Node *insertatPoint(Node *head, int data, int index)
{

    Node *ptr = new Node;
    Node *p = head;
    int i = 0;

    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
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
    cout << "After insertion at the bieginning-->" << endl;
    head = insertAtBeginning(head, 9696);
    llTraversal(head);
    cout << "After insertion at a particutlar index -->" << endl;
    head = insertatPoint(head, 777, 1);
    llTraversal(head);

    return 0;
}