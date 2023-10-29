#include <iostream>
using namespace std;
int main()
{
    int n=0, c=0;
    cout<<"length:"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter number: "<<i+1<<endl;
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
        int a;
        a=arr[i]/2;
        if(c>=a)
        {
            cout<<"Value: "<<arr[i];
            break;
        }
    }
    return 0;
}