#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

Node *binarySearch(Node *ptr)
{
    int key;
    while (ptr != NULL)
    {
        if (key == 30)
        {
            return ptr;
        }
    }
}

// int maxElement(Node *ptr)
// {
//     int max;
//     while (ptr != NULL)
//     {
//         if (max < ptr->data)
//         {
//             max = ptr->data;
//             ptr = ptr->next;
//         }
//     }
//     return max;
// }

// int minElement(Node *ptr)
// {

//     int min;
//     while (ptr != NULL)
//     {
//         if (min > ptr->data)
//         {
//             min = ptr->data;
//             ptr = ptr->next;
//         }
//     }
//     return min;
// }

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

    cout << binarySearch(head) << endl;

    // cout << "--------------------------------" << endl;
    // int largestElement = maxElement(head);
    // cout << largestElement << endl;

    // int smallestElement = minElement(head);
    // cout << smallestElement << endl;

    return 0;
}