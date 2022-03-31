#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breath;
};

int main()
{

    // declaring pointer to a variable
    cout << "Declaring pointer to a variable" << endl;
    int a = 12;
    int *ptr = &a;

    cout << a << " " << *ptr << endl;

    // Declaring reference variables.
    cout << "Declaring reference variables:- " << endl;

    int b = 12;
    b++;
    int &r = b;
    cout << b << " " << r << endl;

    //Declaring a pointer to a struct
    cout << "Declaring a pointer to a struct:- " << endl;
    Rectangle rec = {10, 20};
    cout << rec.length << endl;
    cout << rec.breath << endl;
    //Using pointer acceccsing the struct
    cout << "Using pointer acceccsing the struct" << endl;
    Rectangle *p = &rec;

    cout << p->length << endl;
    cout << p->breath << endl;

    //Dynamic allocation of struct
    cout << "Dynamic allocation of struct: " << endl;
    Rectangle *pointer;
    pointer = new Rectangle;

    pointer->length = 32;
    pointer->breath = 24;

    cout << pointer->length << endl;
    cout << pointer->breath << endl;
}
