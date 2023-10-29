#include <iostream>
using namespace std;
int main()
{
    int n,g,risk=0,nonrisk=0,D,total;
    cout<<"Enter people N: ";
    cin>>n;
    cout<<"Enter days: ";
    cin>>D;
    int a[n];
    for(int i;i<n;i++)
    {
        cout<<"Enter age; ";
        cin>>a[i];
        if(a[i]>=80 ||  a[i]<=9)
        {
            risk++;
        }
        else
        {
            nonrisk++;
        }
    }
    while(risk>0)
    {
        risk=risk-D;
        total++;

    }
    cout<<total;

}