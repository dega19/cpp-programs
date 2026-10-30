#include <iostream>
using namespace std;

int main()
{
    int num;
    long long fact = 1;

    cout << "Enter a number: ";
    cin >> num;

    if (num < 0)
    {
        cout << "Factorial is not defined for negative numbers";
    }
    else
    {
        for (int i = 1; i <= num; i++)
        {
            fact = fact * i;
        }

        cout << "Factorial = " << fact;
    }

    return 0;
}