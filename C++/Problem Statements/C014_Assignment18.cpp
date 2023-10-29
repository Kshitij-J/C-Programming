#include <iostream>
using namespace std;
int main()
{
    int n,sum=0,s;
    cout<<"Enter n number: ";
    cin>>n;
    for(int i;i<=n;i++)
    {
        sum+=i;
    }
    cout<<sum;
    if(sum%2==0)
    {
        cout<<"It is right: "<<n;
    }
    else
    {
        if(sum%2!=0)
        {
            sum--;
            n--;
            cout<<"It should: "<<n;
        }
    }
}