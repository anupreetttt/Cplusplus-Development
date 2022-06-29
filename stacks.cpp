
#include <iostream>
using namespace std;

class Stack
{
public:
    int size;
    int top;
    int *arr;
};

int isFull(Stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty(Stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(Stack*ptr, int value){
    if (isFull(ptr))
    {
        cout << "Stack overflow" << endl;
    } else{
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}

int pop(Stack *ptr){
    int val;
    if (isEmpty(ptr))
    {
        cout << "Stack underflow" << endl;
        return -1;
    } else{
        val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
    
}

int main()
{

    Stack *sp = new Stack;
    sp->size = 10;
    sp->top = -1;
    sp->arr = new int;

cout << isFull(sp) << endl;
cout << isEmpty(sp) << endl;

push(sp, 56);

cout << isFull(sp) << endl;
cout << isEmpty(sp) << endl;

pop(sp);

cout << isFull(sp) << endl;
cout << isEmpty(sp) << endl;

    return 0;
}
