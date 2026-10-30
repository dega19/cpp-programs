#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int sum = 0;
    float average;

    cout << "Enter 5 array elements: ";

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }

    average = (float)sum / 5;

    cout << "Average of array elements = " << average;

    return 0;
}