/*
Q1 - Simple Interest

#include<iostream>
using namespace std;

int main()
{
	int p,r,t,i;
		cout << "\nCalculate the Simple Interest :";
	cout<<" Input the Principle: ";
	cin>>p;
	cout<<" Input the Rate of Interest: ";
	cin>>r;
	cout<<" Input the Time: ";
	cin>>t;
	i=(p*r*t)/100;
	cout<<" The Simple interest for the amount is : <<i;
	return 0;
}
*/


/*
Q2 - Area and Perimeter

#include<iostream>
using namespace std;
int main() {
	int width,height,area,perimeter;
	cout<<"Enter  Width of Rectangle = ";
	cin>>width;
	cout<<"Enter  Height of Rectangle = ";
	cin>>height;
	area=height*width;
	cout<<"Area of Rectangle ="<<area<<endl;
	perimeter=2*(height+width);
	cout<<" Perimeter of rectangle = "<<perimeter<<endl;
	return 0;
}
*/

/*
Q3 - Even Odd
#include <iostream>
using namespace std;

int main() {
  int n;

  cout << "Enter an integer: ";
  cin >> n;

  if ( n % 2 == 0)
    cout << n << " is even.";
  else
    cout << n << " is odd.";

  return 0;
}
*/

/*
Q4 - read a student's percentage marks, classify it into different grades, and display the grade. If the percentage marks secured are greater than or equal to 90,
the student is awarded grade A; but if they are greater than or equal to 80 but less than 90,
Grade B is awarded; if they are greater than or equal to 65 but less than 80, Grade C is awarded; otherwise, Grade D is awarded.

#include <iostream>
using namespace std;
int main()
{
    float percentage;

    // Read the percentage marks from the user
    cout << "Enter the student's percentage marks: ";
    cin >> percentage;

    // Check and display the grade
    if (percentage >= 90)
    {
        cout << "Grade A" <<endl;
    }
    else if (percentage >= 80)
    {
        cout << "Grade B" <<endl;
    }
    else if (percentage >= 65)
    {
        cout << "Grade C" <<endl;
    }
    else
    {
        cout << "Grade D" <<endl;
    }

    return 0;
}
*/

/*
Q5 - Input the lengths of three sides of a triangle and check whether the triangle is valid or not. Also, classify the triangle as equilateral, isosceles or scalene.
Note: If the sum of the lengths of any two sides is greater than the length of the third side then a triangle is valid.

#include <iostream>
using namespace std;

int main() {
    double side1, side2, side3;

    cout << "Enter the lengths of three sides of the triangle:\n";
    cin >> side1 >> side2 >> side3;

    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)
    {
        if (side1 == side2 && side2 == side3)
        {
            cout << "It is an equilateral triangle." << endl;
        }
        else if (side1 == side2 || side1 == side3 || side2 == side3)
        {
            cout << "It is an isosceles triangle." << endl;
        }
        else
        {
            cout << "It is a scalene triangle." << endl;
        }
    }
    else
    {
        cout << "It is not a valid triangle." << endl;
    }

    return 0;
}
*/


/*
Q6 - Find the factorial of a number.

#include <iostream>
using namespace std;

int main() {
    int num;
    unsigned factorial = 1;
    cout << "Enter a non-negative integer: ";
    cin >> num;

    if (num < 0)
    {
        cout << "Factorial is not defined for negative numbers." << endl;
    }
    else
    {
        for (int i = 1; i <= num; ++i)
        {
            factorial *= i;
        }
        cout << "Factorial of " << num << " = " << factorial << endl;
    }
    return 0;
}
*/


/*
Q7 - Find the sum of the following series- 12 + 22 + 32 +…. N2

#include <iostream>
using namespace std;

int main() {
    int n;
    unsigned sum = 0;

    cout << "Enter the value of N: ";
    cin >> n;

    if (n < 1)
    {
        cout << "N should be a positive integer." << endl;
    }
    else
    {
        for (int i = 1; i <= n; ++i)
        {
            sum += i * i;
        }
        cout << "The sum of the series 1^2 + 2^2 + ... + " << n << "^2 is: " << sum << endl;
    }

    return 0;
}
*/

