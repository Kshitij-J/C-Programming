#include<iostream>
using namespace std;
int main()
{
    int n=0, fact=1, temp=1, sum=0;
    cout<<"\nEnter the number: ";
    cin>>n;
    int n1 = n;
    while (n1!=0)
    {
        temp = n1%10;
        fact = 1;
        for (int i=1; i<=temp; i++)
        {
            fact= fact*i;
        }
        n1 = n1/10;
    }
    if (sum == n)
    {
        cout<<"\nIt is a strong number";
    }
    else
    {
        cout<<"\nIt is not a strong number";
    }
    return 0;
}
