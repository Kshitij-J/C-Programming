/*
Develop a program that accepts sales amount;
if the sales amount is more than 5000, then the discount is 12% of the sales amount;
otherwise, it is 7%—display the total discount and amount to be paid after the discount.

#include <iostream>
using namespace std;
int main()
{
    double dis = 0.0, sales = 0.0, total = 0.0;
    cout << "Enter sales amount: ";
    cin >> sales;
    if (sales <= 0.0)
    {
        cout << "Error!";
        return 0;
    }
    else
    {
        if (sales > 5000.0)
            dis = 0.12 * sales;
        else
            dis = 0.07 * sales;
        total = sales - dis;
        cout << "\nTotal\n";
        cout << "Discount: " << dis << endl;
        cout << "Amount to be paid: " << total << endl;
    }
}
*/

/*
Write a program to test whether a given character is a capital or small letter
and change small letters to capital letters and vice versa.

#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a single character: ";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z')
    {
        cout << "Lowercase character\n";
        cout << ch << " as uppercase: " << char(ch - 32) << endl;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "Uppercase character\n";
        cout << ch << " as Lowercase: " << char(ch + 32) << endl;
    }
    else
        cout << "Error! Not part of english alphabet" << endl;
}
*/


/*
Implement a program to accept a year as input and print whether it is a leap.
A year is a leap if divisible by 4, and centennial years (years divisible by 100)
are leap years only when divisible by 400.

#include <iostream>
using namespace std;
int main()
{
    int yr;
    cout << "Enter year: ";
    cin >> yr;
    if (yr < 1)
    {
        cout << "Error! Please enter positive year";
        return 0;
    }
    else
    {
        if (yr % 4 == 0 && yr % 100 == 0 && yr % 400 != 0)
            cout << yr << " Is not a leap year" << endl;
        else if (yr % 400 == 0 || yr % 4 == 0)
            cout << yr << " Is a leap Year" << endl;
        else if (yr % 4 != 0)
            cout << yr << " Is not a leap year" << endl;
    }
}
*/

/*
Develop a program to perform divisibility tests by 3 and 5.
If the entered number is divisible by three and not by five print “THREE”;
if the number is divisible by five and not by three print “FIVE”;
if divisible by both 3 & 5 print “BOTH” otherwise, print “NOT”

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    if (n == 0)
        cout << "NOT" << endl;
    else if (n % 3 == 0 && n % 5 == 0)
        cout << "BOTH" << endl;
    else if (n % 3 == 0)
        cout << "THREE" << endl;
    else if (n % 5 == 0)
        cout << "FIVE" << endl;
    else
        cout << "NOT" << endl;
}
*/

/*
Vitamin D3 is recommended as the best indicator of vitamin D's nutritional status.
If any patient is undergone a Vitamin D3 test, its value ranges from 0 <= to >100 nm/ML.
Scott is a Pathologist, and he is doing a vitamin D3 test on his patient.
You have to help him automate this process to know the status/level of vitamin D3 depending
on its values in nm/mL.
Write a program to help Scott to tell the status level to patients as given in the table below.
<20 = deficiency
20-30 = insufficiency
30-100 = suffiency
100< = toxicity

#include <iostream>
using namespace std;
int main()
{
    int d;
    cout << "Enter Vitamin D3 level in nm/mL: ";
    cin >> d;
    if (d < 1 || d > 1000)
    {
        cout << "Error! Please enter positive values";
        return 0;
    }
    else
    {
        if (d < 20)
            cout << "Deficiency in D3 Vitamin" << endl;
        else if (d >= 20 && d < 30)
            cout << "Insufficiency in D3 Vitamin" << endl;
        else if (d >= 30 && d < 100)
            cout << "Sufficiency in D3 Vitamin" << endl;
        else if (d > 100 && d < 1001)
            cout << "Toxicity in D3 Vitamin" << endl;
    }
}
}
*/

/*
Write a program that takes three coefficients (a,b,and c) of a quadratic equation;
ax2+bx+c=0 as input, compute all possible roots, and print them with appropriate messages.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter coefficient of X²: ";
    cin >> a;
    cout << "Enter coefficient of X: ";
    cin >> b;
    cout << "Enter coefficient of constant: ";
    cin >> c;
    float dis, root1, root2;
    dis = (b * b) - (4 * a * c);
    if (dis < 0)
        cout << "Roots are imaginary" << endl;
    else if (dis == 0)
    {
        cout << "Roots are real and equal" << endl;
        root1 = -b / (2 * a);
        root2 = root1;
        cout << "Root 1 = " << root1 << "\t Root 2 = " << root2 << endl;
    }
    else if (dis > 0)
    {
        cout << "Roots are real" << endl;
        root1 = (-b + sqrt(dis)) / (2 * a);
        root2 = (-b - sqrt(dis)) / (2 * a);
        cout << "Root 1 = " << root1 << "\t Root 2 = " << root2 << endl;
    }
    else
        cout << "Error";
}
*/

/*
Using a switch case, write a program to check whether
the entered character is a vowel or consonant.

#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a single character: ";
    cin >> ch;
    char c = tolower(ch);
    switch (c)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout << ch << " is a vowel" << endl;
        break;
    case 'b':
    case 'c':
    case 'd':
    case 'f':
    case 'g':
    case 'h':
    case 'j':
    case 'k':
    case 'l':
    case 'm':
    case 'n':
    case 'p':
    case 'q':
    case 'r':
    case 's':
    case 't':
    case 'v':
    case 'w':
    case 'x':
    case 'y':
    case 'z':
        cout << ch << " is a consonant" << endl;
        break;
    default:
        cout << "Not part of english alphabet" << endl;
    }
}
*/

/*
Write a program that takes an arithmetic operator (+, -, *, or /) and two operands from the user.
Perform corresponding arithmetic operations on the operands using switch case

#include <iostream>
using namespace std;
int main()
{
    float a, b;
    char choice;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "+ = Addition" << endl;
    cout << "- = Subtraction" << endl;
    cout << "* = Multiplication" << endl;
    cout << "/ = Division" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    switch (choice)
    {
    case '+':
        cout << a << " + " << b << " = " << a + b << endl;
        break;
    case '-':
        cout << a << " - " << b << " = " << a - b << endl;
        cout << b << " - " << a << " = " << b - a << endl;
        break;
    case '*':
        cout << a << " * " << b << " = " << a * b << endl;
        break;
    case '/':
        cout << a << " / " << b << " = " << a / b << endl;
        cout << b << " / " << a << " = " << b / a << endl;
        break;
    default:
        cout << "Error! Invalid Choice" << endl;
    }
}
*/


/*
Implement a menu-driven program to calculate the area of a triangle, rectangle, circle, and sphere.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int ans, length, breadth, a, b, c, radius, choice = 0;
    float s, area;
    cout << "1 - Area of triangle" << endl;
    cout << "2 - Area of rectangle" << endl;
    cout << "3 - Area of circle" << endl;
    cout << "4 - Area of sphere" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Enter side 1: ";
        cin >> a;
        cout << "Enter side 2: ";
        cin >> b;
        cout << "Enter side 3: ";
        cin >> c;
        s = (a + b + c) / 2;                          // Semi-perimeter
        area = sqrt(s * (s - a) * (s - b) * (s - c)); // herons formula
        cout << "Area = " << area << endl;
        break;
    case 2:
        cout << "Enter length of rectangle: ";
        cin >> length;
        cout << "Enter breadth of rectangle: ";
        cin >> breadth;
        ans = length * breadth;
        cout << "Area of rectangle = " << ans << endl;
        break;
    case 3:
        cout << "Enter radius of circle: ";
        cin >> radius;
        area = 3.14 * radius * radius;
        cout << "Area of circle = " << area << endl;
        break;
    case 4:
        cout << "Enter radius of sphere: ";
        cin >> radius;
        area = 4 * 3.14 * radius * radius;
        cout << "Surface area of sphere = " << area << endl;
        break;
    default:
        cout << "Error! Invalid Choice" << endl;
    }
}
*/
