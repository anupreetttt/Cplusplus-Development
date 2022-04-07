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

Node *deleteFirst(Node *head)
{

    Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

Node *deleteAtIndex(Node *head, int index)
{

    Node *p = head;
    Node *q = head->next;

    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }

    p->next = q->next;
    free(q);

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
    cout << "After deleting first element -->" << endl;
    head = deleteFirst(head);
    llTraversal(head);

    cout << "After deleting at a index -->" << endl;
    head = deleteAtIndex(head, index);

    return 0;
}