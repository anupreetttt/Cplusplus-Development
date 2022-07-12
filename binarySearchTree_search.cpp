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

Node* search(Node * root, int key) {
    if (root == NULL)
    {
        return NULL;
    } if (key == root->data)
    {
        return root;
    } else if (key < root->data)
    {
        return search(root->leftChild, key);
    } else
    {
        return search(root->rightChild, key);
    }
}

int main()
{
    // Constructing the root node using function:-
    Node *p = createNode(5);
    Node *p2 = createNode(3);
    Node *p3 = createNode(6);
    Node *p4 = createNode(1);
    Node *p5 = createNode(4);

    p->leftChild = p2;
    p->rightChild = p3;
    p2->leftChild = p4;
    p2->rightChild = p5;
 

    Node* n = search(p, 5); 
    if (n != NULL)
    {
        cout << "Found: " <<  n->data << endl;
    } else {
        cout << "Key not found." << endl;
    }

    return 0;
}
