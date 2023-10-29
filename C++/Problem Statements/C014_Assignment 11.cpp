#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    cout<<"Enter Number of Movies playing in cinema: ";
    cin>>n;
    int li[n], ri[n], prod[n], index[n];
    for(int i = 0; i<n; i++)
    {
        cout<<"Enter the length and the rating of the Movie "<<i+1<<endl;
        cout<<"Length of the movie is : ";
        cin>>li[i];
        cout<<"Rating of the movie is : ";
        cin>>ri[i];
        prod[i] = li[i] * ri[i];
    }
    int max = prod[0];
    for(int i=0; i<n; i++)
    {
        if(max < prod[i])
        {
            max = prod[i];
        }
    }
    int k = 0;
    for(int i=0;i<n;i++)
    {
        if(max == prod[i])
        {
            index[k] = i;
            k++;

        }
    }
    int temp_rating = ri[0];
    int index_rating = index[0];
    if(k>1)
    {
        for(int i=0; i<k; i++)
        {
            if(temp_rating < ri[index[i]])
            {
                temp_rating = ri[index[i]];
                index_rating = index[i];
            }
        }
    }
    cout<<"\nThe Movie Little Yash Should Watch is: "<<index_rating +1;

    return 0;
}
