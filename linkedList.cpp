#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void transversal(Node *ptr)
{

    while (ptr != NULL)
    {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }
}

Node *insertionAtTheBeginning(Node *ptr)
{

    Node *newNode = new Node;
    newNode->data = 15;
    newNode->next = ptr->next;
    ptr->next = newNode;

    return ptr;
}

Node *insertionAtPosition(Node *ptr, int pos)
{

    Node *newNode = new Node;
    Node *newPtr = ptr;

    int i = 0;
    while (i != pos - 1)
    {
        newPtr = newPtr->next;
        i++;
    }
    newNode->data = 35;
    newNode->next = newPtr->next;
    newPtr->next = newNode;

    return ptr;
}

Node *insertAtTheEnd(Node *ptr)
{
    Node *newNode = new Node;
    Node *newPtr = ptr;

    while (newPtr->next != NULL)
    {
        newPtr = newPtr->next;
    }
    newNode->data = 100;
    newNode->next = NULL;
    newPtr->next = newNode;

    return ptr;
}

int maxElement(Node *ptr)
{
    int max = -9999;
    while (ptr != NULL)
    {
        if (max < ptr->data)
        {
            max = ptr->data;
        }
        ptr = ptr->next;
    }
    return max;
}

int minElement(Node *ptr)
{

    int min = 9999;
    while (ptr != NULL)
    {
        if (min > ptr->data)
        {
            min = ptr->data;
        }
        ptr = ptr->next;
    }
    return min;
}

Node *linearSerach(Node *ptr){

    int key = 30;
    while (ptr != NULL)
    {
        if (key == ptr->data)
        {
            return ptr;
        }
        ptr = ptr->next;
    }
    return NULL;   

}

int main()
{

    Node *head = new Node;
    Node *second = new Node;
    Node *third = new Node;
    Node *fourth = new Node;

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = NULL;

    cout << "Transversal: " << endl;
    transversal(head);

    cout << "Insertion at the beginning of the linked list:  " << endl;
    head = insertionAtTheBeginning(head);
    transversal(head);

    cout << "Insertion at a particular position of the linked list:  " << endl;
    head = insertionAtPosition(head, 3);
    transversal(head);

    cout << "Insertion at end of the linked list:  " << endl;
    head = insertAtTheEnd(head);
    transversal(head);

    cout << "Maximum element: " << endl;
    cout << maxElement(head) << endl;

    cout << "Minimum element: " << endl;
    cout << minElement(head) << endl;

    cout << "Linear search: " << endl;
    cout << linearSerach(head) << endl;
}

