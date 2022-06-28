#include <iostream>
using namespace std; // This is an input struct. Do not edit.
class LinkedList
{
public:
    int value;
    LinkedList *next = nullptr;
    // LinkedList(int value) { this->value = value; }
};

void transversal(LinkedList *ptr)
{

    while (ptr != NULL)
    {
        cout << ptr->value << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

LinkedList *removeDuplicatesFromLinkedList(LinkedList *linkedList)
{ // Write your code here.
    LinkedList *p = linkedList;
    LinkedList *q;
    while (p != NULL && p->next != NULL)
    {
        if (p->value == p->next->value)
        {
            q = p->next->next;
            if (q == NULL)
            {
                p->next = NULL;
                break;
            }
            p->next = q;
        }
        if (p->value != p->next->value)
        {
            p = p->next;
        }
    }
    return linkedList;
}

int main()
{
    LinkedList *head = new LinkedList;
    LinkedList *second = new LinkedList;
    LinkedList *third = new LinkedList;
    LinkedList *fourth = new LinkedList;
    LinkedList *fifth = new LinkedList;

    head->value = 10;
    head->next = second;

    second->value = 20;
    second->next = third;

    third->value = 20;
    third->next = fourth; 

    fourth->value = 20;
    fourth->next = fifth;

    fifth->value = 40;
    fifth->next = NULL;

    transversal(head);
    cout << "After removal: " << endl;
    head = removeDuplicatesFromLinkedList(head);
    transversal(head);
}