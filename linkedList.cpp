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

int main()
{

// Link list implementaion
    Node *head; // head is pointing towards first node
    Node *second; // first node is pointing towards second
    Node *third; // second node is pointing towards third

    head = new Node;
    second = new Node;
    third = new Node;

    head->data = 7;
    head->next = second;

    second->data = 213;
    second->next = third;

    third->data = 124;
    third->next = NULL;

    llTraversal(head);
    return 0;
}