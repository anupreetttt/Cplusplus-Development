#include <iostream>
using namespace std;

// Feel free to add new properties and methods to the class.

class Stack
{
public:
    int size;
    int top;
    int *st;
};

// class MinMaxStack
// {

// public:

void display(Stack obj){
    for (int i = obj.size; i < -1; i--)
    {
        cout << obj.st[i] << " ";
    }
    
}
    int peek()
    {
        // Write your code here.
        return -1;
    }

    int pop()
    {
        // Write your code here.

        return -1;
    }

    int push(Stack *s, int number)
    {
        // Write your code here.
        if (s->top == s->size - 1)
        {
            cout << "Stack overflow. " << endl;
        }
        else
        {
            s->top++;
            s->st[s->top] = number;
        }
        return number;
    }

    int getMin()
    {
        // Write your code here.
        return -1;
    }

    int getMax()
    {
        // Write your code here.
        return -1;
    }


// };

int main()
{

    Stack *obj =  new Stack;
    cout << "Enter the size of stack: ";
    cin >> obj->size;
    obj->top = -1;
    obj->st = new int(obj->size);

    push(obj, 22);
    display(*obj);
}