#include <iostream>
using namespace std;

class Stack{
    public:
    int size;
    int top;
    int *arr;
};

int main(){

    Stack *s;
    s->size = 80;
    s->top = -1;
    s->arr = new int;

    return 0;
}
