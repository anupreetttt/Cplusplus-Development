#include<iostream>
using namespace std;

class Node {
    public:
    Node *leftChild;
    int data;
    Node *rightChild;
};

Node* createNode(int data) {

    Node *ptr = new Node;
    ptr->data = data;
    ptr->leftChild = NULL;
    ptr->rightChild = NULL;  
    return ptr;
}

int main()
{
    // Constructing the root node using function:- 
    Node *p = createNode(2);
    Node *p2 = createNode(4);
    Node *p3 = createNode(6);
    p->leftChild = p2;
    p->rightChild = p3;


   return 0;
}
