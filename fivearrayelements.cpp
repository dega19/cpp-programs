#include <iostream>
using namespace std;

int main()
{
    int arr[5];

    cout << "Enter 5 array elements: ";

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout << "Array elements are: " << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}