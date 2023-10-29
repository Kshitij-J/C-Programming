/*
Q1 - Class “Employee” has data members: Emp_id, Emp_name and Emp_sal and this class uses a parameterized constructor
to accept the details of 2 employees and display the results using the display () function.

#include<iostream>
#include<string>
using namespace std;

class Employee
{
    int Emp_id;
    string Emp_name;
    float Emp_sal;

public:
    //Parameterized Constructor
    Employee(int emp_id, string emp_name, float emp_sal)
    {
        Emp_id = emp_id;
        Emp_name = emp_name;
        Emp_sal = emp_sal;
    }

    void display()
    {
        cout << "Employee ID: " << Emp_id << endl;
        cout << "Employee Name: " << Emp_name << endl;
        cout << "Employee Salary: " << Emp_sal << endl;
        cout << endl;
    }
};

int main()
{
    int emp1_id, emp2_id;
    string emp1_name, emp2_name;
    float emp1_sal, emp2_sal;

    cout << "Enter Employee ID: ";
    cin >> emp1_id;
    cin.ignore();
    cout << "Enter Employee Name: ";
    getline(cin, emp1_name);
    cout << "Enter Employee Salary: ";
    cin >> emp1_sal;

    cout << "Enter Employee ID: ";
    cin >> emp2_id;
    cin.ignore();
    cout << "Enter Employee Name: ";
    getline(cin, emp2_name);
    cout << "Enter Employee Salary: ";
    cin >> emp2_sal;

    Employee emp1(emp1_id, emp1_name, emp1_sal);
    Employee emp2(emp2_id, emp2_name, emp2_sal);

    emp1.display();
    emp2.display();

    return 0;
}
*/



/*
Q2 - Define class Complex with real and imaginary as data members, define default and parameterized constructor to initialize two complex numbers.
Define add (Complex, Complex) member function to add two complex numbers and show( ) function to display both the complex numbers with their addition.

#include <iostream>
#include <string>
using namespace std;
class Complex
{
    int real, imaginary;

public:
    Complex()
    {
        this->real = 0;
        this->imaginary = 0;
    }
    Complex(int r, int i)
    {
        this->real = r;
        this->imaginary = i;
    }
    Complex add(Complex a, Complex b)
    {
        Complex ans;
        ans.real = a.real + b.real;
        ans.imaginary = a.imaginary + b.imaginary;
        return ans;
    }
    void show()
    {
        if (this->imaginary >= 0)
            cout << this->real << " + " << this->imaginary << "i" << endl;
        else
            cout << this->real << " - " << -this->imaginary << "i" << endl;
        cout << endl;
    }
};
int main()
{
    int r1, i1, r2, i2;
    cout << "For First Complex variable\n";
    cout << "Enter real part : ";
    cin >> r1;
    cout << "Enter imaginary part : ";
    cin >> i1;
    cout << "For Second Complex variable\n";
    cout << "Enter real part : ";
    cin >> r2;
    cout << "Enter imaginary part : ";
    cin >> i2;
    Complex obj1(r1, i1);
    Complex obj2(r2, i2);
    Complex ans;

    cout << "\n\nPrinting Complex Numbers\n\n";
    cout << "First Complex Number\n";
    obj1.show();
    cout << "\nSecond Complex Number\n";
    obj2.show();
    cout << "\n\nAdding Complex Numbers\n\n";
    ans = ans.add(obj1, obj2);
    cout << "Sum of Complex Numbers\n";
    ans.show();
    cout << endl;
}
*/


/*
Q3 - Rewrite above question to add two complex numbers using overloaded + operator.

#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    Complex()
    {
        real = 0;
        imaginary = 0;
    }

    Complex(int r, int i)
    {
        real = r;
        imaginary = i;
    }

    Complex operator+(const Complex &other)
    {
        Complex result;
        result.real = real + other.real;
        result.imaginary = imaginary + other.imaginary;
        return result;
    }

    void show()
    {
        if (imaginary >= 0)
            cout << real << " + " << imaginary << "i" << endl;
        else
            cout << real << " - " << -imaginary << "i" << endl;
    }
};
int ans()
{
    return 1.732 * 1.732;
}
int main()
{
    int r1, i1, r2, i2;
    cout << "For First Complex variable\n";
    cout << "Enter real part: ";
    cin >> r1;
    cout << "Enter imaginary part: ";
    cin >> i1;
    cout << "For Second Complex variable\n";
    cout << "Enter real part: ";
    cin >> r2;
    cout << "Enter imaginary part: ";
    cin >> i2;

    Complex obj1(r1, i1); // First complex number
    Complex obj2(r2, i2); // Second complex number

    Complex sum = obj1 + obj2; // Sum of the two complex numbers using overloaded +

    cout << "\nPrinting Complex Numbers\n";
    cout << "First Complex Number: ";
    obj1.show();
    cout << "Second Complex Number: ";
    obj2.show();

    cout << "\nAdding Complex Numbers\n";
    cout << "Sum of Complex Numbers: ";
    sum.show();

    return 0;
}
*/


/*
Q4 - Create a class rectangle with (length, width), derive a class box with additional member (depth). In both the classes write parameterized constructor to
initialize data member and area ( ) function to find area. Define main ( ) and create appropriate objects to call area ( ) function.

#include <iostream>
using namespace std;

class Rectangle
{
public:
    Rectangle(double len, double wid) : length(len), width(wid)
    {
    }

    double area()
    {
        return length * width;
    }

    double length;
    double width;
};

class Box : public Rectangle
{
public:
    Box(double len, double wid, double dep) : Rectangle(len, wid), depth(dep)
    {
    }

    double volume()
    {
        return length * width * depth;
    }

private:
    double depth;
};

int main()
{
    Rectangle rectangle(5, 4);
    cout << "Rectangle Area: " << rectangle.area() << endl;

    Box box(3, 2, 1);
    cout << "Box Area: " << box.area() << endl;
    cout << "Box Volume: " << box.volume() << endl;

    return 0;
}
*/

/*
Q5 - Declare a class employee having data members as id, name and member function as getData( ) & display( ). Derive class manager from employee class.
Manager class has data members as salary and member functions as getdata( ) & display( ). Again, derive class project manager from manager. Project manager
class have data members as total experience, number of projects handled and member function as getdata() & display(). Write a program using multilevel inheritance
to display all details of project manager.

#include <iostream>
using namespace std;

class Employee
{
public:
    string id;
    string name;

    void getData();
    void display();
};
void Employee::getData()
{
    cout << "Enter employee ID: ";
    cin >> id;
    cout << "Enter employee name: ";
    cin.ignore();
    getline(cin,name);
}

void Employee::display()
{
    cout << "Employee ID: " << id << endl;
    cout << "Employee Name: " << name << endl;
}

class Manager : public Employee
{
public:
    double salary;

    void getData();
    void display();
};
void Manager::getData()
{
    Employee::getData();
    cout << "Enter manager's salary: ";
    cin >> salary;
}

void Manager::display()
{
    Employee::display();
    cout << "Manager's Salary: " << salary << endl;
}

class ProjectManager : public Manager
{
public:
    int total_experience;
    int projects_handled;

    void getData();
    void display();
};
void ProjectManager::getData()
{
    Manager::getData();
    cout << "Enter total experience: ";
    cin >> total_experience;
    cout << "Enter number of projects handled: ";
    cin >> projects_handled;
}

void ProjectManager::display()
{
    Manager::display();
    cout << "Total Experience: " << total_experience << endl;
    cout << "Projects Handled: " << projects_handled << endl;
}

int main()
{
    ProjectManager p;
    cout << "Enter Project Manager Details:" << endl;
    p.getData();
    cout << "\nProject Manager Details:" << endl;
    p.display();
    return 0;
}
*/
