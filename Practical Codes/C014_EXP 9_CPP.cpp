/*
Q1 - Create a class named 'Student' with a string (char array) variable 'name' and an integer variable 'roll_no'.
Assign the value of roll_no as 2 and that of name as "John" in main( ) function by creating an object of the class Student and display the same.

#include<iostream>
using namespace std;

class Student
{
public:
    string name;
    int roll_no;
};
int main()
{
    Student s;
    s.name = "John";
    s.roll_no = 2;

    cout<<"The Name is: "<<s.name<<endl;
    cout<<"The Roll Number is: "<<s.roll_no;
}
*/

/*
Q2 - Create a class student having data members name, rollno & branch and define two member function getData( ) & display( ) for taking input & display the same.
Write a complete C++ code for displaying the information of a student.


#include<iostream>
using namespace std;

class Student
{
    string name;
    int roll_no;
    string branch;
public:
    void getData();
    void display();
};

void Student::getData()
{
    cout<<"Enter your name: "<<endl;
    cin.ignore();
    getline(cin,name);

    cout<<"Enter Branch: "<<endl;
    getline(cin,branch);

    cout<<"Enter Roll Number: "<<endl;
    cin>>roll_no;
}

void Student::display()
{
    cout<<"Name: "<<name<<endl;

    cout<<"Branch: "<<branch<<endl;

    cout<<"Roll Number: "<<roll_no<<endl;
}

int main()
{
    Student s;
    s.getData();
    s.display();
}
*/



/*
Q3 - Create a student record (name, rollno, marks of 3 subjects and score), calculate the average, store average in a score data member.
If score<40, declare FAIL else PASS along with student details, maintain 10 students records. (make use of member function to read and display records)

#include<iostream>
using namespace std;

class Student
{
    string name;
    int roll_no;
    float sub1;
    float sub2;
    float sub3;
public:
    void getData();
    void display();
    float score;
};

void Student::getData()
{
    cout<<"Enter your name: "<<endl;
    cin.ignore();
    getline(cin,name);

    cout<<"Enter Roll Number: "<<endl;
    cin>>roll_no;

    cout<<"Enter Marks of Subject 1: "<<endl;
    cin>>sub1;

    cout<<"Enter Marks of Subject 2: "<<endl;
    cin>>sub2;

    cout<<"Enter Marks of Subject 3: "<<endl;
    cin>>sub3;

}

void Student::display()
{
    score = (sub1 + sub2 + sub3)/3 ;
    cout<<"Name: "<<name<<endl;

    cout<<"Roll Number: "<<roll_no<<endl;

    cout<<"Average : "<<score<<endl;

    if(score > 40)
    {
        cout<<"PASS!"<<endl;
    }
    else
    {
        cout<<"FAIL!"<<endl;
    }
}

int main()
{
    Student s[10];
    for(int i = 0; i<10; i++)
    {
        s[i].getData();

        s[i].display();

    }

}
*/



/*
Q4 - Write a program to overload sum function to perform addition of two integers, three integers and two floating-point numbers.

 #include<iostream>
 using namespace std;

 int sum(int x, int y)
 {
     return x+y;
 }

 int sum (int x, int y, int z)
 {
     return x+y+z;
 }

 double sum(double x, double y)

 {
     return x+y;
 }


 int main()
 {

     cout <<"The Sum of two int: "<<sum(30, 50)<<endl;
     cout <<"The Sum of three int: "<<sum(10, 20, 30)<<endl;
     cout <<"The Sum of two floats: "<<sum(1.5, 2.9)<<endl;
 }
*/


/*
Q5 - Create a class named “Shapes” with data member area. Write a member function “calArea” with two float parameters to
calculate the area of rectangle and overload the same function having one float parameter to calculate the area of square.

#include<iostream>
using namespace std;

class Shapes
{
    float length;
    float breadth;
    float Area;
public:
    float area;
    void calArea();
    int Area_rectangle();
    int Area_sqaure();

};

int Shapes::Area_rectangle()
{
    cout<<"Enter Length" <<endl;
    cin>>length;

    cout<<"Enter Breadth" <<endl;
    cin>>breadth;

    Area = length*breadth;

    cout<<"Area is : "<<Area;
}
int Shapes::Area_sqaure()
{
    cout<<"Enter Length" <<endl;
    cin>>length;

    Area = length*length;

    cout<<"Area is : "<<Area;
}
int main()
{
    int ch;
    cout << "Rectangle: 1" << endl;
    cout << "Square: 2" << endl;
    cout << "Choose One : ";
    cin >> ch;

    Shapes s;
    switch (ch)
    {
    case 1:
        s.Area_rectangle();
        break;
    case 2:
        s.Area_sqaure();
        break;
    }
}
*/
