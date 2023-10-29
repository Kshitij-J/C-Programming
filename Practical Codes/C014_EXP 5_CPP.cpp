/*
Q1 - Write a program to print following pattern using nested loop.
A
BC
DEF
GHIJ
KLMNO

#include<iostream>
using namespace std;
int main()
{
    char k = 65;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout<< k << " ";
            k++;

        }
        cout<<endl;
    }
    return 0;
}
*/



/*
Q2 - Write a program to print following pattern using nested loop.
*****
****
***
**
*

#include<iostream>
using namespace std;
int main()
{
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5-i ; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
*/



/*
Q3 - Write a program to print following pattern using nested loop, read number of lines to be displayed from user.
    *
   **
  ***
 ****
*****

#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j < 5 - i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout << "*";
        }
        cout <<endl;
    }
  return 0;
}
*/



/*
Q4 - Write a program to print following pattern using nested loop.
        $
    $      $
$       $       $

#include <iostream>
using namespace std;
int main()
{
  for(int i = 1; i <= 3; i++)
  {

    for(int j = 0; j < 3 - i; j++)
    {
        cout<<"  ";
    }

    for(int j = 1; j <= i; j++)
    {
        cout<<"$   ";
    }
    cout<<endl;
  }
  return 0;
}
*/



/*
Q5 - Write a program to print following pattern using nested loop.
1
1  2
1  2  3
3  2  1
2  1
1

#include<iostream>
using namespace std;
int main()
{
    for(int i = 1; i < 4; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    for(int i = 3; i > 0; i--)
    {
        for(int j = i; j >= 1; j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/



/*
Q6 - Write a C++ program to print Armstrong numbers between N1 to N2, where N2>N1.
#include <iostream>
using namespace std;
int main()
{
    int num1=0, num2=0;
    cout<<"Enter the lower limit: ";
    cin>>num1;
    cout<<"Enter the Upper limit: ";
    cin>>num2;
    for(int i=num1; i<=num2; i++)
    {
        int num=i;
        int digit=0;
        while(num > 0)
        {
            digit++;
            num/=10;
        }
        int sum=0, rem=0, result=1;
        num=i;
        while(num>0)
        {
            result=1;
            rem = num%10;
            for(int i=0; i<digit;i++)
                {
                  result=result*rem;
                }
            sum = sum + result;
            num /=10;
        }
        if(sum == i)
            cout<<i<<" ";
    }
}
*/



/*
Q7 - Write a C++ program to print prime numbers between N1 to N2, where N2>N1.

#include <iostream>
using namespace std;
int main()
{
    int num1=0, num2=0, count=0;
    cout<<"Enter the lower limit: ";
    cin>>num1;
    cout<<"Enter the Upper limit: ";
    cin>>num2;
    cout<<"Prime numbers between "<<num1<<" and "<<num2<<" are: "<<endl;
    for(int i=num1; i<=num2; i++)
    {
        count=0;
        for(int j=2; j<=i/2; j++)
        {
            count =0;
            if(i%j == 0)
            {
                count++ ;
                break;
            }
        }
        if(count ==0)
        {
            if(i == 0 || i==1)
                continue;
            else
                cout<<i<<" ";
        }

    }
    return 0;
}
*/



/*
Q8 - WAP to generate all combinations of 1, 2 & 3 using for loop.

#include <iostream>
using namespace std;
int main()
{
    int i=0,j=0,k=0;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            for(k=1;k<=3;k++)
            {
                    cout<<"Combination : "<<i<<j<<k<<endl;
            }
        }
    }
}
*/
