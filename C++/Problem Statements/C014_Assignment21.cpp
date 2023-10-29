/*
You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer.
The digits are ordered from most significant to least significant in left-to-right order.
The large integer does not contain any leading 0's.
Increment the large integer by one and return the resulting array of digits.
*/
#include <iostream>
using namespace std;
int count_digits(long int a);
void converting(long int a);
int main()
{
    long int inpt = 0;
    cout << "Enter a number: ";
    cin >> inpt;
    converting(inpt);
    return 0;
}
int count_digits(long int a)
{
    int temp = a;
    int digit;
    int count = 0;
    while (a != 0)
    {
        a = a / 10;
        count++;
    }
    return count;
}
void converting(long int a)
{
    int length = count_digits(a);
    int digits[length];
    int digit;
    for (int i = length - 1; i >= 0; i--)
    {
        digit = a % 10;
        digits[i] = digit;
        a = a / 10;
    }
    int max = -2147483648;
    for (int i = 0; i < length; i++)
    {
        if (digits[i] > max)
        {
            max = digits[i];
        }
    }
    for (int i = 0; i < length; i++)
    {
        if (digits[i] == max)
        {
            digits[i]++;
        }
    }
    for (int i = 0; i < length; i++)
    {
        cout << digits[i];
    }
}
