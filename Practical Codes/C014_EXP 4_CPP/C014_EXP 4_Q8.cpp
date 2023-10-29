#include <iostream>
using namespace std;
int main()
{
    int n, digit, sum = 0;
start:
    cout << "Enter a positive number: ";
    cin >> n;
    if (n < 0)
    {
        cout << "\nError please enter positive value\n"; // only want positive numbers
        goto start;
    }
    int n1 = n;
    sum += (n % 10); // adding the last digit
    while (n != 0)
    {
        digit = n % 10;
        n /= 10; // at end of this loop digit becomes the first digit of the number while n becomes 0
    }
    sum += digit; // adding first digit
    cout << "Sum of first and last digit of " << n1 << " = " << sum << endl;
}
