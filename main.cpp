#include <iostream>
using namespace std;

int main() {
   const int NUM_ELEMENTS = 8;  // Number of elements
   int userVals[NUM_ELEMENTS];  // User values
   int i;                       // Loop index
   
   // Prompt user to input values
   cout << "Enter " << NUM_ELEMENTS << " integer values..." << endl;
   cout << "Value: ";
   for (i = 0; i < NUM_ELEMENTS; ++i) {
    //  cout << "Value: ";
      cin >> userVals[i];
   }
   
   // Convert negatives to 0
   for (i = 0; i < NUM_ELEMENTS; ++i) {
      if (userVals[i] < 0) {
         userVals[i] = 0;
      }
   }
   
   // Print numbers
   cout << "New numbers: ";
   for (i = 0; i < NUM_ELEMENTS; ++i) {
      cout << userVals[i] << " ";
   }
   
   return 0;
}