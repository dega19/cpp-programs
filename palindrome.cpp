#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    bool isPalindrome = true;

    cout << "Enter a string: ";
    cin >> str;

    int len = str.length();

    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - 1 - i])
        {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
    {
        cout << str << " is a Palindrome";
    }
    else
    {
        cout << str << " is not a Palindrome";
    }

    return 0;
}