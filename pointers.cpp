#include <iostream>
using namespace std;

int main(){


// declaring pointer to a variable
    int a = 12;
    int *ptr = &a;

    cout << &a << " " << *ptr <<  endl;



// Declaring reference variables.
    int b = 12;

    b++;
    int &r = b;


    cout << a << " " << r << endl;


}
