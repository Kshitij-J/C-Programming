#include<iostream>
using namespace std;
int main()
{
    int n=0;
    char a;
    do
    {
        cout<<"\nEnter any number: ";
        cin>>n;
        if (n>0)
        {
            cout<<"\nThe number is positive";
        }
        else if (n<0)
        {
            cout<<"\nThe number is negative";
        }
        else
        {
            cout<<"\nZero";
        }
        cout<<"\nDo you want to continue? (Y or N): ";
        cin>>a;
    }
    while (a == 'Y' || 'y');
    return 0;
}
