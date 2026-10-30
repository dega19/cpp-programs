#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 35 && marks <= 100)
    {
        cout << "Student Passed";
    }
    else if (marks >= 0 && marks < 35)
    {
        cout << "Student Failed";
    }
    else
    {
        cout << "Invalid Marks";
    }

    return 0;
}