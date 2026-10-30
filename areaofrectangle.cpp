#include <iostream>
using namespace std;

int main()
{
    int length, breadth;
    int area;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter breadth: ";
    cin >> breadth;

    area = length * breadth;

    cout << "Area of Rectangle = " << area;

    return 0;
}