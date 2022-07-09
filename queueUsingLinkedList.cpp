#include <iostream>
using namespace std;

class MyStack {
public:
    MyStack
    () {
        int frinInt;
        int rear;
        int size;
        int *Q;
    }
    
    void push(int x) {
        if(frinInt == rear) {
            cout << "Stack is empty" << endl;
        } else {
            rear++;
            Q[rear] = x;
        }
    }
    
    int pop() {
        int x= -1;
        if(rear = size -1) {
            cout << "Stack is full" << endl;
        } else {
            x = Q[frinInt+1]
            frinInt++;
        }
        return x;
    }
    
    int top() {
        
    }
    
    bool empty() {
        
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */