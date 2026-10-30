#include <iostream>
using namespace std;

int main()
{
    int a, b;
    float div;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (b != 0)
    {
        div = (float)a / b;
        cout << "Division = " << div;
    }
    else
    {
        cout << "Division by zero is not possible";
    }

    return 0;
}