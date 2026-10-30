#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int sum = 0;

    cout << "Enter 5 array elements: ";

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }

    cout << "Sum of array elements = " << sum;

    return 0;
}