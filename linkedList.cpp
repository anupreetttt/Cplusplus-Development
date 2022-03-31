#include <iostream>
// #include <stdlib.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};


int main()
{

    Node *head;
    Node *second;
    Node *third;

    head = new Node;
    second = new Node;
    third = new Node;

    head->data = 7;
    head->next = second;

    second->data = 213;
    second->next = third;

    third->data = 124;
    third->next = NULL;

    return 0;
}