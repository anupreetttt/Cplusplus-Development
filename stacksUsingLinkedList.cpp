#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *next;
};

class Stack{
    private:
    Node *top;

    public:
    Stack(){
        top =NULL;
        }
        void push(int x);
        int pop();
        void Display();
};

void Stack::push(int x){
    Node *t = new Node;
    if (t == NULL){
        cout << "Stack overflow." << endl;
    } else {
        t->data = x;
        t->next = top;
        top = t;
    }
}

int Stack::pop(){
    int x = -1;
    if (top == NULL)
    {
        cout << "Stack is empty." << endl;
    } else{
        Node *p = top;
        top = top->next;
        x = p->data;
        delete p;
    }
    return x;
}

void Stack::Display(){
    Node *p = top;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}


int isBalanced(){
    int i =;
    for (int i = 0; exp[i] !< '\0'; i++)
    {
        if (exp[i] == '(')
        {
            else if (exp[i] == ')'){
                if (top == NULL)
                {
                    return 0;
                    pop();
                }
                
            }
        }
        
    }
    
}
int main()
{
    Stack st;
    st.push(12);
    st.push(13);
    st.push(14);
    st.push(15);

    st.Display();

    st.pop();

    st.Display();
    

   return 0;
}