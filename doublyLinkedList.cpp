#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
};

void traversal(Node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }
}

void traversalReverse(Node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << endl;
        ptr = ptr->prev;
    }
}

Node *insertAtBeginning(Node *ptr)
{

    Node *newNode = new Node;
    newNode->data = 300;
    newNode->prev = NULL;
    newNode->next = ptr;
    ptr->prev = newNode;
    ptr = newNode;

    return ptr;
}

Node *insertAtPosition(Node *ptr, int pos)
{

    Node *newNode = new Node;
    newNode->data = 1124;
    Node *newPtr = ptr;

    for (int i = 1; i < pos - 1 ; i++)
    {
        newPtr = newPtr->next;
    }

    newNode->next = newPtr->next;
    newNode->prev = newPtr;
    newPtr->next = newNode;
    newPtr->next->prev = newNode;

    return ptr;
}

int main()
{

    Node *head = new Node;
    Node *first = new Node;
    Node *second = new Node;
    Node *third = new Node;
    Node *fourth = new Node;

    head->data = 10;
    head->next = second;
    head->prev = NULL;

    second->data = 20;
    second->next = third;
    second->prev = head;

    third->data = 30;
    third->next = fourth;
    third->prev = second;

    fourth->data = 40;
    fourth->next = NULL;
    fourth->prev = third;

    traversal(head);
    cout << endl;
    traversalReverse(fourth);
    cout << endl;

    head = insertAtBeginning(head);
    traversal(head);
 
    cout << endl;
    head = insertAtPosition(head, 3);
    traversal(head);

    return 0;
}