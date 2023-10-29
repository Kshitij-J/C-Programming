/* Write a program to check whether the entered number is a palindrome. */
#include<iostream>
using namespace std;

int main()
{
    int num, digit, rev=0;

    cout<<"Enter a number: ";
    cin>>num;

    int temp=num;

    do
     {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
     }
     while (num != 0);

     cout<<"Reverse: "<<rev<<endl;

    if (rev == temp)
        cout << "Palindrome"<<endl;
    else
        cout << "Not a palindrome"<<endl;

    return 0;
}
