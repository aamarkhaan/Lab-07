#include <iostream>
using namespace std;

int main()
{
    int numbers[10];
    int positive_Numbers = 0;
    int negative_Numbers = 0;
    int odd_Numbers = 0;
    int even_Numbers = 0;
    int zero_Numbers = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << "Enter Number " << (i + 1) << " : ";
        cin >> numbers[i];
        if (numbers[i] > 0)
        {
            positive_Numbers++;
        }
        else if (numbers[i] < 0)
        {
            negative_Numbers++;
        }
        else
        {
            zero_Numbers++;
        }

        if (numbers[i] % 2 == 0)
        {
            even_Numbers++;
        }
        else
        {
            odd_Numbers++;
        }
    }

    cout << "Positive numbers : " << positive_Numbers << endl;
    cout << "Negative numbers : " << negative_Numbers << endl;
    cout << "Odd numbers : " << odd_Numbers << endl;
    cout << "Even numbers : " << even_Numbers << endl;
    cout << "Zeros : " << zero_Numbers << endl;

    return 0;
}