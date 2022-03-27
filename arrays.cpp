// Write a for loop to populate array userGuesses with NUM_GUESSES integers. Read integers using cin. Ex: If NUM_GUESSES is 3 and user enters 9 5 2, then userGuesses is {9, 5, 2}.
#include <iostream>
using namespace std;

void display(int array[], int size)
{
   for (int i = 0; i < size; i++)
   {
      cout << array[i] << " ";
   }
   cout << endl;
}
int insert(int array[], int size, int addNum, int index)
{
   for (int i = size - 1; i >= index; i--)
   {
      array[i + 1] = array[i];
   }
   array[index] = addNum;
   return 1;
}

void deleteFun(int array[], int size, int addNum, int index){
   for (int i = index; i < size - 1; i++)
   {
      array[i] = array[i+1];
   }

}
int main()
{
   int array[10];
   int size = 5;
   int addNum;
   int index;

   cout << "Enter 5 number: ";
   for (int i = 0; i < size; i++)
   {
      cin >> array[i];
   }
   cout << "Enter a number which you want to add: ";
   cin >> addNum;

   cout << "Enter a index:  ";
   cin >> index;
   display(array, size);
   insert(array, size, addNum, index);
   size++;
   display(array, size);
   deleteFun(array, size, addNum, index);
   size--;
   display(array, size);

}
