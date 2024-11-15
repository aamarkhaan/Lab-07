#include <iostream>
using namespace std;

int main()
{
   int arr[10];
   int most_hours = 0;
   int heighest_index = 0;
   
   for(int i = 0; i < 10; i++ )
   {
      cout << "Enter the hours studied by student " << i + 1 << " : ";
      cin >> arr[i];
   }
      cout << endl;

    for(int i = 0; i < 10; i++ )
   {
      cout << "The hours studied by student "<< i + 1 <<  " : " << arr[i] << endl;
   }
    
    for( int i = 0; i < 10; i ++)
    {
         if(arr[i] > most_hours)
         {
            most_hours = arr[i];
            heighest_index = i;
         }
    }
      
       cout << "Most hours studied by student " << heighest_index + 1 << " is : " << most_hours << endl;

     return 0;
}