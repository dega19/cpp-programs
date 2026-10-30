#include <iostream>
using namespace std;

int main()
{
    int square;

    for (int i = 1; i <= 10; i++)
    {
        square = i * i;

        cout << "Square of " << i << " = " << square << endl;
    }

    return 0;
}