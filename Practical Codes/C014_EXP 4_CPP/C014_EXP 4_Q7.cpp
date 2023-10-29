#include <iostream>
using namespace std;
int main()
{
    int n, digit, num_of_digits = 0;
start:
    cout << "Enter positive number: ";
    cin >> n;
    if (n < 1)
    {
        cout << "\nPlease enter positive number\n";
        goto start;
    }
    int n1 = n; // two copies, one for finding sum, second for checking condition
    int n2 = n;
    while (n != 0)
    {
        n /= 10;
        num_of_digits++; // calculating number of digits, n becomes 0 at end of this loop
    }
    int sum = 0, fact = 1;
    while (n1 != 0)
    {
        digit = n1 % 10;
        for (int i = 1; i <= num_of_digits; i++)
            fact *= digit; // calculating factorial of each digit
        sum += fact;       // adding factorial of each digit
        fact = 1;          // resetting for correct calculations
        n1 /= 10;          // updating number, it will become 0 at the end of the loop
    }
    if (sum == n2) // n2 is the only variable that has the value of the original number as n and n1 are now 0
        cout << n2 << " is an armstrong number" << endl;
    else
        cout << n2 << " is not an armstrong number" << endl;
}
7
