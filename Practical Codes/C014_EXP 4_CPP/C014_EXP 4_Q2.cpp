#include<iostream>
using namespace std;
int main()
{
    int m=0, n=0, sum=0;
    cout<<"\nEnter the first number: ";
    cin>>m;
    cout<<"\nEnter the second number: ";
    cin>>n;
    for (int i=m; i<=n; i++)
    {
        sum = sum+i;
    }
    cout<<"\nThe sum is: "<<sum;
    return 0;
}
