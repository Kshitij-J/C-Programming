/* Implement a program to print all Leap Years from 1 to N using C++ program. */
#include <iostream>
using namespace std;

int main() 
{
    int n;

    cout << "Enter a value for N: ";
    cin >> n;

    cout << "Leap years between 1 and " << n << ":\n";

    for (int year = 1; year <= n; year++)
    {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
        {
            cout << year << " ";
        }
    }

    cout << "\n";

    return 0;
}
