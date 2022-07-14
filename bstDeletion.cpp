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

Node* search(Node *root, int key) {
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

    Node *inOrderPredecessor(Node *root) {
        root = root->leftChild;
        while (root->rightChild != NULL)
        {
            root = root->rightChild;
        }
        return root;
    }

    Node *deleteNode(Node *root, int value){
        Node *iPre;
        if (root == NULL)
        {
            return NULL;
        } if (root->leftChild == NULL && root->rightChild == NULL) // means node is a leaf node
        {
            free(root);
            return NULL;
        }
        
        if (value < root->data)
        {
           root->leftChild = deleteNode(root->leftChild, value);
        } else if (value > root->data)
        {
            root->rightChild = deleteNode(root->rightChild, value);
        } else {
            iPre = inOrderPredecessor(root);
            root->data = iPre->data;
            root->leftChild = deleteNode(root->leftChild, iPre->data);
        } 
            return root; 
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
 
    inOrder(p);
    deleteNode(p, 4);
    cout << endl;
    inOrder(p);
    return 0;
}
