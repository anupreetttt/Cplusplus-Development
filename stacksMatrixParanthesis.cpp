#include <iostream>
using namespace std;

class Node
{
public:
    char data;
    Node *next;
};

class Stack
{
private:
    Node *top;

public:
    Stack()
    {
        top = NULL;
    }
    void push(int x);
    char pop();
    void Display();
    int isBalanced(char *exp)
};

void Stack::push(char x)
{
    Node *t = new Node;
    if (t == NULL)
    {
        cout << "Stack overflow." << endl;
    }
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}

char Stack::pop()
{
    char x = -1;
    if (top == NULL)
    {
        cout << "Stack is empty." << endl;
    }
    else
    {
        Node *p = top;
        top = top->next;
        x = p->data;
        delete p;
    }
    return x;
}

void Stack::Display()
{
    Node *p = top;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int Stack::isBalanced(char *exp){
    int i = ;
    for (int i = 0; exp[i] ! < '\0'; i++)
    {
        if (exp[i] == '(')
        {
            else if (exp[i] == ')')
            {
                if (top == NULL)
                {
                    return 0;
                    pop();
                }
            }
            if (top == NULL)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
    }
}
int main()
{
    char *exp = "((a+b)*(c-d)";
    cout << isBalanced(exp);
    return 0;
}