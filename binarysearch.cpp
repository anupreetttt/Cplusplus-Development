#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int findNum){

    int mid;
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        if (arr[mid] == findNum)
        {
            return mid;
        } else if (mid > findNum){
            high = mid - 1;
        } else{
            low = mid + 1;
        }
    }
    return -1;
}

int main(){

    int size = 10;
    int arr[size];
    int findNum;

    cout << "Enter a number you want to search: ";
    cin >> findNum;
    cout << "Enter 10 digits: ";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    

       int getIndex =binarySearch(arr, size, findNum);

cout << getIndex << endl;


}