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
        cout<<"value"<<i+1<<endl;
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        c=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
        if(c<=1)
        {
            cout<<"Value: "<<arr[i];
            break;
        }
    }
    return 0;
}