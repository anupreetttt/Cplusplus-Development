#include <iostream>
using namespace std;

int linearSearch(int array[], int find)
{

    for (int i = 0; i < 7; i++)
    {
        if (array[i] == find){
            return i;
        }
    }
    return -1;
}

int main()
{

    int array[] = {2, 4, 6, 8, 10, 12, 14};

    int find = 22;
    int searchIndex = linearSearch(array, find);

    cout << searchIndex << endl;

}