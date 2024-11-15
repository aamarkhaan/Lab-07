#include <iostream>
using namespace std;

int main()
{
   int size = 0;
   int arr[size];

   cout << "Enter the size of array : " ;
   cin >> size;

   for(int i = 0; i < size; i++ )
   {
      cout << "Enter the value to store in an array : " ;
      cin >> arr[i];
   }

   for(int i = 0; i < size; i++ )
   {
      cout << arr[i] << endl;
   }

   return 0;

}