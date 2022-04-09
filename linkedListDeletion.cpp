#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void traversal(Node *ptr)
{

    while (ptr != NULL)
    {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }
}

Node *deletionAtThebeginning(Node *head)
{

    Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

Node *deletionAtTheposition(Node *head, int pos)
{

    Node *p = head;
    Node *q = head->next;

    for (int i = 0; i < pos - 1; i++)
    {
        p = p->next;
        q = q->next;
    }

    p->next = q->next;
    free(q);

    return head;
}

Node *deleteWithValue(Node *head, int data)
{

    Node *p = head;
    Node *q = head->next;

    while (q->data != data && q != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == data)
    {
        p->next = q->next;
        free(q);
    }

    return head;
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
    traversal(head);

    cout << "Deletion at the beginning: " << endl;
    head = deletionAtThebeginning(head);
    traversal(head);

    cout << "Deletion at a position beginning: " << endl;
    head = deletionAtTheposition(head, 2);
    traversal(head);

    cout << "Deletion with value: " << endl;
    head = deleteWithValue(head, 124);
    traversal(head);
}