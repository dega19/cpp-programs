#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int search;
    bool found = false;

    cout << "Enter 5 array elements: ";

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> search;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == search)
        {
            found = true;
            break;
        }
    }

    if (found)
    {
        cout << search << " is found in the array";
    }
    else
    {
        cout << search << " is not found in the array";
    }

    return 0;
}