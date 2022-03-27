// Write a for loop to populate array userGuesses with NUM_GUESSES integers. Read integers using cin. Ex: If NUM_GUESSES is 3 and user enters 9 5 2, then userGuesses is {9, 5, 2}.
#include <iostream>
using namespace std;

// void display(int array[], int size)
// {
//    for (int i = 0; i < size; i++)
//    {
//       cout << array[i] << " ";
//    }
//    cout << endl;
// }
// int insert(int array[], int size, int addNum, int index)
// {
//    for (int i = size - 1; i >= index; i--)
//    {
//       array[i + 1] = array[i];
//    }
//    array[index] = addNum;
//    return 1;
// }

// void deleteFun(int array[], int size, int addNum, int index){
//    for (int i = index; i < size - 1; i++)
//    {
//       array[i] = array[i+1];
//    }

// }
// int main()
// {
//    int array[10];
//    int size = 5;
//    int addNum;
//    int index;

//    cout << "Enter 5 number: ";
//    for (int i = 0; i < size; i++)
//    {
//       cin >> array[i];
//    }
//    cout << "Enter a number which you want to add: ";
//    cin >> addNum;

//    cout << "Enter a index:  ";
//    cin >> index;
//    display(array, size);
//    insert(array, size, addNum, index);
//    size++;
//    display(array, size);
//    deleteFun(array, size, addNum, index);
//    size--;
//    display(array, size);

// }
// . Write a C++ program to find the largest element of a given array of integers.
// int main(){

//    int array[5] = {10,8,5,12312,3};

//    int larVal = array[0];

//    for (int i = 0; i < 5; i++)
//    {
//       if (larVal < array[i])
//       {
//          larVal = array[i]; 
//       }
      
//    }
//    cout << larVal << endl;
   
// }
//2. Write a C++ program to find the smallest three elements in an array.

void smallestThree(int array[], int size){

      sort(array, array + size);

      int check = 0;
      int count = 0;

      for (int i = 0; i <= size; i++)
      {
         if(count < 3){
            if(check != array[i]){
               cout << array[i] << " ";
               check = array[i];
               count++;
            } 
         }
         else 
         break;
      }
      
   }

//2. Write a C++ program to find the largest three elements in an array.

void largestThree(int array[], int size){

      sort(array, array + size);

      int check = 0;
      int count = 0;

      for (int i = 1; i <= size; i++)
      {
         if(count < 3){
            if(check != array[size - i]){
               cout << array[size - i] << " ";
               check = array[size - i];
               count++;
            } 
         }
         else 
         break;
      }
      
   }

int main(){

   int size = 5;
   int array[size];

   cout << "Enter 5 number: ";
   for (int i = 0; i < size; i++)
   {
      cin >> array[i];
   }
   

   cout << endl;
   largestThree(array, size);
   cout << endl;
   smallestThree(array, size);
   

}