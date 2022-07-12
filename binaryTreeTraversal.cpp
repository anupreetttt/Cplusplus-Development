#include <iostream>
using namespace std;

class Node
{
public:
    Node *leftChild;
    int data;
    Node *rightChild;
};

Node *createNode(int data)
{

    Node *ptr = new Node;
    ptr->data = data;
    ptr->leftChild = NULL;
    ptr->rightChild = NULL;
    return ptr;
}

// Pre order traversal

void preOrder(Node *root)
{
    if (root != NULL)
    {
        cout << root->data << " ";
        preOrder(root->leftChild);
        preOrder(root->rightChild);
    }
}

// Post order traversal

void postOrder(Node *root)
{
    if (root != NULL)
    {
        postOrder(root->leftChild);
        postOrder(root->rightChild);
        cout << root->data << " ";
    }
}

// In order traversal

void inOrder(Node *root)
{
    if (root != NULL)
    {
        postOrder(root->leftChild);
        cout << root->data << " ";
        postOrder(root->rightChild);
    }
}

int main()
{
    // Constructing the root node using function:-
    Node *p = createNode(2);
    Node *p2 = createNode(4);
    Node *p3 = createNode(6);
    Node *p4 = createNode(8);
    Node *p5 = createNode(10);
    Node *p6 = createNode(12);

    p->leftChild = p2;
    p->rightChild = p3;
    p2->leftChild = p4;
    p2->rightChild = p5;
    p3->leftChild = p6;

    preOrder(p);
    cout << endl;
    postOrder(p);
    cout << endl;
    inOrder(p);
    return 0;
}
