#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int largest;

    cout << "Enter 5 array elements: ";

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    largest = arr[0];

    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    cout << "Largest element = " << largest;

    return 0;
}