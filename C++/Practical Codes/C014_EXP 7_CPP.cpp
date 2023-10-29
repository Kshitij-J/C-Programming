/*
Q1 - Write a function that takes one integer parameter as a year, and displays its leap year or not

#include<iostream>
using namespace std;
void leap_year(int year);
int main()
{
    int year;
    start:
    cout<<"Enter year to check if its leap or not: ";
    cin>>year;
    if(year<=0)
    {
        goto start;
    }
    else
    {
        cout<<leap_year(year);

    }
}

void leap_year(int year)
{
    if(year % 400 == 0)
        cout << year << " is a Leap Year";

    else if(year % 4 == 0  && year % 100 != 0)
        cout << year << " is a Leap Year";

    else
        cout << year << " is not a Leap Year";

}
*/


/*
Q2 - Write a function that takes two integer parameters x & y, and returns the result XY.   (Don’t use pow( ))


#include<iostream>
using namespace std;
int power(int x, int y);
int main()
{
    int x;
    int y;
    start:
    cout<<"Enter Base : ";
    cin>>x;
    cout<<"Enter Exponent : ";
    cin>>y;
    if(x<=0 && y<=0)
    {
        goto start;
    }
    else
    {
        cout<<power(x,y);
    }

}

int power(int x, int y)
{
    if (y == 0)
    {
        return 1;
    }
    if (x == 0)
    {
        return 0;
    }

    return x * power(x, y - 1);
}
*/


/*
Q3 - Implement a program using user defined function to return largest of three floating-point numbers.

#include<iostream>
using namespace std;
float Largest_Num(float x, float y, float z);
int main()
{
    float x=0;
    float y=0;
    float z=0;
    start:
    cout<<"Enter First Floating Point Number : ";
    cin>>x;
    cout<<"Enter Second Floating Point Number : ";
    cin>>y;
    cout<<"Enter Third Floating Point Number : ";
    cin>>y;
    if(x<=0 && y<=0 && z<=0)
    {
        goto start;
    }
    else
    {
        cout<<Largest_Num(x,y,z);
    }
}
float Largest_Num(float x, float y, float z)
{
    if (x>=y && x>=z)
    {
        cout<<"Greatest is : " << x;
    }
    else if (y>=x && y>=z)
    {
        cout<<"Greatest is : "<< y;
    }
    else
    {
        cout<<"Greatest is : "<< z;
    }
}
*/

/*
Q4 - WAP using user defined function to calculate and return factorial of a given integer.

#include <iostream>
using namespace std;
int factorial(int number);
int main()
{
    int number;
    cout<<"Enter any Number: ";
    cin>>number;

    cout<<factorial(number);

}

int factorial(int number)
{
    int i;
    int fact=1;
    for(i=1;i<=number;i++)
    {
      fact=fact*i;
    }
  cout<<"Factorial of " <<number<<" is: "<<fact<<endl;
  return 0;
}
*/


/*
Q5 - Write a menu driven program to compute sum of digits of a number, to find reverse of a number, to count number of digits by writing three different functions with parameters and return type.

#include<iostream>
using namespace std;
int sum_of_numbers(int num1);
int reversed_number(int num2);
int count_digit(int num3);
int main()
{
    int flag = 1;
    int num1,num2,num3;

    while(flag = 1)
    {
        cout<<"Main Menu"<<endl;
        cout<<"\nEnter 1 for Finding Sum of Digits";
        cout<<"\nEnter 2 for Finding Reverse of Number";
        cout<<"\nEnter 3 for Counting Number of Digits"<<endl;
        cout<<"Enter your Choice : ";
        cin>>flag;

        switch(flag)
        {
        case 1:
            cout<<"Enter Number : ";
            cin>>num1;
            sum_of_numbers(num1);
            cout<<sum_of_numbers(num1);
            break;
        case 2:
            cout<<"Enter Number : ";
            cin>>num2;
            reversed_number(num2);
            cout<<reversed_number(num2);
            break;
        case 3:
            cout<<"Enter Number : ";
            cin>>num3;
            count_digit(num3);
            cout<<count_digit(num3);
            break;
        default:
            cout<<"Invalid Choice!";
        }
        cout<<"\nDo you want to do any more operations? Enter 1 for Yes and Any other key for exit";
        cin>>flag;
    }

}
int sum_of_numbers(int num1)
{
    if(num1 == 1)
    {
        return 1;
    }
    else
    {
        return num1 + sum_of_numbers(num1 -1);
    }
}

int reversed_number(int num2)
{
    int n, reversed_number = 0, remainder;
    while(n != 0)
    {
        remainder = n % 10;
        reversed_number = reversed_number * 10 + remainder;
        n /= 10;
    }

}
int count_digit(int num3)
{
   int count = 0;
   while(num3 != 0)
    {
      num3 = num3 / 10;
      count++;
   }
   return count;
}
*/


/*
Q6 - Write user defined function “search” to search element is present in 1D array or not. Search function accepts array and key to search as parameters.

#include <iostream>
using namespace std;
void search_array(int arr[],int num, int srch);
int main()
{
    int num=0;
    cout<<"Enter the size of array: ";
    cin>>num;
    int arr[num];
    for(int i=0; i<num;i++)
    {
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i];
    }
    int srch = 0;
    cout<<"Enter the element to be searched: ";
    cin>>srch;
    search_array(arr,num,srch);
    return 0;
}

void search_array(int arr[],int num, int srch)
{
    for(int i=0;i<num;i++)
    {
        if(srch == arr[i])
            cout<<"It exists";
    }
}
*/



/*
Q7 - Write a program to print Fibonacci series up to n using recursion.


#include <iostream>
using namespace std;
int fibonacci(int num);
int main()
{
   int num , i=0;
   cout << "Enter the number of terms of series : ";
   cin >> num;
   cout << "\nFibonnaci Series : ";
   while(i < num)
   {
      cout << " " << fibonacci(i);
      i++;
   }
   return 0;
}
int fibonacci(int num)
{
    if((num==1)||(num==0))
    {
      return num;
    }
    else
    {
      return(fibonacci(num-1)+fibonacci(num-2));
    }
}
*/

/*
Q8 - Write one program to perform following operations on strings

    1. To find length of a string
    2. To compare two string for equality
    3. To Copy one string to other
    4. To concatenate two string
    5. To find reverse of a String

#include<iostream>
#include<string>
using namespace std;
string str, str1, str2;
int str_length(string);
void str_compare(), str_cpy(), str_reverse(), str_concat();
int main()
{
    int choice, num;
    do
    {
        cout<<"\nEnter your choice:\n1. Length\n2. Compare\n3. Copy\n4. Concatinate\n5. Reverse\n6. END\n";
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"Enter string: ";
                cin.ignore();
                getline(cin, str);
                cout<<str_length(str);
                break;
            case 2:
                str_compare();
                break;
            case 3:
                str_cpy();
                break;
            case 4:
                str_concat();
                break;
            case 5:
                str_reverse();
                break;
            case 6:
                break;
            default:
                cout<<"Invalid input!";
        }

    }while(choice != 6);
}

int str_length(string s)
{
    int i;
    for(i = 0; s[i]!='\0'; i++)
    {
    }
    return i;
}

void str_compare()
{
    int i;
    cout<<"Enter string1: ";
    cin.ignore();
    getline(cin, str1);
    cout<<"Enter string2: ";
    getline(cin, str2);

    for( i = 0; str1[i]!='\0' || str2[i]!='\0'; i++ )
    {
        if(str1[i]!=str2[i])
        {
            cout<<"Unequal strings!"<<endl;
            return;
        }
    }
    cout<<"Equal strings!";
}

void str_cpy()
{
    int i;
    cout<<"Enter string1: ";
    cin.ignore();
    getline(cin, str1);

    for(i = 0; str1[i]!='\0'; i++)
    {
        str2[i] = str1[i];
    }
    for(i = 0; str2[i]!='\0'; i++)
    {
        cout<<str2[i];
    }
}

void str_concat()
{
    cout<<"Enter string1: ";
    cin.ignore();
    getline(cin, str1);
    cout<<"Enter string2: ";
    getline(cin, str2);
    cout<<str1+str2<<endl;
}

void str_reverse()
{
    int i, len, count = 0;
    cout<<"Enter string1: ";
    cin.ignore();
    getline(cin, str1);
    len = str_length(str1);
    count = len - 1;
    for(i = 0; i < len; i++)
    {
        str2[i] = str1[count];
        --count;
    }
    for(i = 0; i < len; i++)
    {
        cout<<str2[i];
    }
}
*/

/*
Q9 - WAP to copy one string to another string without using string handling function and display copied string.

#include<iostream>
#include<string>
using namespace std;
string str_cpy(string, string);
int main()
{
    string s1, s2;
    cout<<"Enter string1: ";
    getline(cin, s1);
    int i;
    for(i = 0; s1[i]!='\0'; i++)
    {
        s2[i] = s1[i];
    }
    for(i = 0; s2[i]!='\0'; i++)
    {
        cout<<s2[i];
    }
}
*/

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int linearsearch(int arr[], int n, int key)
{
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] == key)
        {
            return i;
        }
        else
        {
            return -1;
        }

    }
}
int main()
{
    int n;
    cout<<"Enter the Size of Array: ";
    cin>>n;

    int arr[n];
    for(int i = 0 ; i<n ; i++)
    {
        cout<<"Enter the element "<< i+1 <<" : "<<endl;
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the Number to be searched: ";
    cin>>key;

    cout<<linearsearch(arr, n, key)<<endl;
    return 0;
}
