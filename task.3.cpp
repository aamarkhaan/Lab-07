#include <iostream>
using namespace std;

int main()
{
   int arr[7];
   int integers = 0;

   for(int i = 0; i < 7; i++ )
   {
      cout << "Enter an integer to store in an array : " ;
      cin >> arr[i];

      if (arr[i] % 5 == 0)
        {
            integers++;
        }
   }
   cout << endl;
      cout << "Number of multiples of 5 in the array is : " << integers << endl;
    return 0;

}