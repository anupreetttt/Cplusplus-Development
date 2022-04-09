#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void listTraversal(Node *p)
{

    while (p != NULL)
    {
        cout << p->data << endl;
        p = p->next;
    }
}

Node *atTheEnd(Node *head, int data)
{

    Node *newNode = new Node;
    newNode->data = data;

    Node * ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = newNode;
    newNode->next = NULL;
    return head;
}

Node *insertionAtIndex(){


}

int main()
{

    Node *head = new Node;
    Node *second = new Node;
    Node *third = new Node;
    Node *fourth = new Node;

    head->data = 100;
    head->next = second;

    second->data = 200;
    second->next = third;

    third->data = 300;
    third->next = fourth;

    fourth->data = 400;
    fourth->next = NULL;

    listTraversal(head);

    cout << "--------------------------------" << endl;

    head = atTheEnd(head, 500);
    listTraversal(head);

    return 0;
}