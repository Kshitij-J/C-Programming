#include <iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter the number of rows: ";
    cin>>r;
    cout<<"Enter the number of columns";
    cin>>c;
    int m1[r][r], m2[r][c], m3[r][c];

    for(int i=0; i<r;i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<"Enter m1["<<i<<"] ["<<j<<"] : ";
            cin>>m1[i][j];
        }
        cout<<endl;
    }

    for(int i=0; i<r;i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<"Enter m2["<<i<<"] ["<<j<<"] : ";
            cin>>m2[i][j];
        }
        cout<<endl;
    }

    for(int i=0; i<r;i++)
    {
        for(int j=0; j<c; j++)
        {
            m3[i][j] = m1[i][j] + m2[i][j];
        }
        cout<<endl;
    }
    cout<<"Addition of Array: "<<endl;
    for(int i=0; i<r;i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<m3[i][j]<<" ";
        }
        cout<<endl;
    }
}
