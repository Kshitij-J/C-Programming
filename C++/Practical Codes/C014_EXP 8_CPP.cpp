/*
Q1- Define structure Student having data members: Roll no, name, address, branch and percentage.
    WAP to read and display information of a student.

#include <iostream>
using namespace std;
struct Student
{
    string name;
    int roll_no;
    string address;
    string branch;
    float percentage;
};
void get_data(Student &s);
void show_data(Student &s);
int main()
{
    int num;
    cout << "Enter number of students: ";
    cin >> num;
    Student s[num];
    for (int i = 0; i < num; i++)
    {
        get_data(s[i]);
    }

    cout << endl;
    for (int i = 0; i < num; i++)
    {
        cout << "\nInfo Student no. " << i + 1;
        show_data(s[i]);
    }
}
void get_data(Student &s)
{
    cout << "\nEnter name: ";
    cin.ignore();
    getline(cin, s.name);
    cout << "Enter rollno: ";
    cin >> s.roll_no;
    cout << "Enter address: ";
    cin.ignore();
    getline(cin, s.address);
    cout << "Enter branch: ";
    getline(cin, s.branch);
    cout << "Enter percentage: ";
    cin >> s.percentage;
}
void show_data(Student &s)
{
    cout << "Name: " << s.name<< endl;
    cout << "Roll No.: " << s.roll_no << endl;
    cout << "Branch: " << s.branch << endl;
    cout << "Address: " << s.address << endl;
    cout << "Percentage: " << s.percentage << endl;
    cout << endl;
}
*/


/*
Q2-Define structure called cricket that will describe the following data Player name, country name,
no of matches played & batting avg. Develop a program that store information of 10 players and display names of players having batting average greater than 50.

#include <iostream>
using namespace std;
#define size 2
struct player
{
    string name;
    string country;
    int no_of_matches;
    float batting_average;
} details[size];
void input(int i);
void ouput(int i);
int main()
{
    for (int i = 0; i < size; i++)
    {
        input(i);
    }
    cout << "Names: \n";
    for (int i = 0; i < size; i++)
    {
        ouput(i);
    }
}

void input(int i)
{
    cout << "\nEnter name: ";
    cin.ignore();
    getline(cin, details[i].name);
    cout << "Enter country of origin: ";
    cin.ignore();
    getline(cin, details[i].country);
    cout << "Enter no. of matches: ";
    cin >> details[i].no_of_matches;
    cout << "Enter batting average: ";
    cin >> details[i].batting_average;
}
void ouput(int i)
{
    if (details[i].batting_average > 50)
    {
        cout << details[i].name << endl;
    }
}
*/


/*
Q3-There are 50 computers in an office. Every computer has following information CPU type, hard disk size.
    WAP to store details of all 50 computers and then print details of computers having hard disk size greater than 8 GB.

#include <iostream>
using namespace std;
#define size 5
struct comp
{
    string cpu_type;
    int capacity;

} details[size];
void input(int i);
void ouput(int i);
int main()
{
    for (int i = 0; i < size; i++)
    {
        input(i);
    }
    cout << "\nNames: \n";
    for (int i = 0; i < size; i++)
    {
        ouput(i);
    }
}
void input(int i)
{
    cout << "\nEnter CPU type: ";
    cin.ignore();
    getline(cin, details[i].cpu_type);
    cout << "Enter storage capacity: ";
    cin >> details[i].capacity;
    cout << endl;
}
void ouput(int i)
{
    if (details[i].capacity > 8)
    {
        cout << details[i].cpu_type << endl;
    }
}
*/

/*
Q4-WAP to print array using pointer

#include <iostream>
using namespace std;
void prnt(int *num);
int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int num[size];
    int *ptr;
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    for (int i = 0; i < size; i++)
    {
        ptr = &num[i];
        prnt(ptr);
    }
}
void prnt(int *num)
{
    cout << *num << " ";
}
*/

/*
Q5-WAP to print string in reverse order

#include <iostream>
#include <string>
using namespace std;
void reverse(char *ch, int size);
int length(char *inpt);
int main()
{
    char inpt[50];
    cout << "Enter a string: ";
    cin >> inpt;
    int size = length(inpt);
    reverse(&inpt[size - 1], size);
}
void reverse(char *inpt, int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        cout << *inpt;
        inpt--;
    }
}
int length(char *inpt)
{
    int count = 0;
    for (int i = 0; inpt[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
*/

/*
Q6 - WAP to copy one string to another using pointer and display copied string using pointer

#include <iostream>
#include <string>
using namespace std;

void cpy(char s[], int size);
int length(char *inpt);
int main()
{
    char inpt[100];
    cout << "Enter string: ";
    cin >> inpt;
    char oupt[length(inpt)];
    char *p, *q;
    p = inpt;
    q = oupt;
    while (*p != '\0')
    {
        *q = *p;
        q++;
        p++;
    }
    *q = '\0';
    cout << oupt;
}

int length(char *inpt)
{
    int count = 0;
    for (int i = 0; inpt[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
*/


/*
7.	WAP to find the number of vowels in entered string using pointer [eg - i/p India o/p A-1, E-0, I-2, O-0, U-0]
*/
#include <iostream>
using namespace std;
void ifvowel(char *p)
{
    int a = 0, e = 0, i = 0, o = 0, u = 0;
    while (*p != '\0')
    {
        if (*p == 'a')
            a++;
        else if (*p == 'e')
            e++;
        else if (*p == 'i')
            i++;
        else if (*p == 'o')
            o++;
        else if (*p == 'u')
            u++;
        p++;
    }
    cout << "A = " << a << "\nE = " << e << "\nI = " << i << "\nO = " << o << "\nU = " << u << endl;
}
int main()
{
    char inpt[] = "Hello";
    ifvowel(&inpt[0]);
}
