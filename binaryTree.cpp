#include<iostream>
using namespace std;

class Node {
    public:
    Node *leftChild;
    int data;
    Node *rightChild;
};

int main()
{
    // Constructing the new node:-
    Node *p = new Node;
    p->leftChild = NULL;
    p->rightChild = NULL;
    p->data = 12;

    cout << p->data << endl;
   return 0;
}