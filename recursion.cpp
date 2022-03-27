#include <iostream>
using namespace std;

//         g++ recursion.cpp && ./a.out
int fun( int n){
    if(n > 0){
        return fun(n-1) + n;
    }
    return 0;
}

int main(){

    int a;
    a = fun(5);
    cout << a;
    return 0;

}
