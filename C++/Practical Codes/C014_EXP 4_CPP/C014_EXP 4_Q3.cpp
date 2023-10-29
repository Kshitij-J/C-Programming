#include<iostream>
using namespace std;
int main()
{
    int x=0, y=0, ans=1;
    cout<<"\nEnter the base: ";
    cin>>x;
    cout<<"\nEnter the exponent: ";
    cin>>y;
    for (int i=1; i<=y; i++)
    {
        ans = ans*x;
    }
    cout<<"\nThe answer is: "<<ans;
    return 0;
}
