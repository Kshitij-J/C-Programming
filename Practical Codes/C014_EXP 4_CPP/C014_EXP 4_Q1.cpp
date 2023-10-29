#include<iostream>
using namespace std;
int main()
{
    int n=0, sum=0;
    cout<<"\nEnter the number: ";
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        sum = sum + i*2;
    }
    cout<<"\nThe sum is: "<<sum;
    return 0;
}
