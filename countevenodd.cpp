#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int even = 0, odd = 0;

    cout << "Enter 5 array elements: ";

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    cout << "Even numbers count = " << even << endl;
    cout << "Odd numbers count = " << odd;

    return 0;
}