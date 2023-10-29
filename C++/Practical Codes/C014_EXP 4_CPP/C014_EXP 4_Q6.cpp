#include<iostream>
using namespace std;
int main()
{
    int n=0, sum=0, temp=1;
    cout<<"\nEnter the number: ";
    cin>>n;
    while (n!=0)
    {
        temp = n%10;
        sum = sum+temp;
        n = n/10;
    }
    cout<<"\nThe sum of the digits is: "<<sum;
    return 0;
}
