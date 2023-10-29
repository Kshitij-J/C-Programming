/*
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Original values: a= " << a << "\tb= " << b << endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "Values after swapping: a= " << a << "\tb= " << b << endl;
}
*/

/*
#include <iostream>
using namespace std;
int main()
{
    float x, y, z, temp = 0.0;
    cout << "Enter value of x: ";
    cin >> x;
    cout << "Enter value of y: ";
    cin >> y;
    cout << "Enter value of z: ";
    cin >> z;

    cout << "Before swapping:\n";
    cout << "x: " << x << "\ty: " << y << "\tz: " << z;
    temp = x;
    x = y;
    y = z;
    z = temp;
    cout << "\nAfter swapping:\n";
    cout << "x: " << x << "\ty: " << y << "\tz: " << z << endl;
}
*/


/*
#include <iostream>
using namespace std;
int main()
{
    float pi = 3.14, r;
    float a, p;
    cout << "Enter radius of circle: ";
    cin >> r;
    if (r < 1)
        cout << "Error";
    else
    {
        a = pi * r * r;
        p = 2 * pi * r;
        cout << "Area = " << a << endl;
        cout << "Perimeter = " << p << endl;
    }
}
*/

/*
#include <iostream>
using namespace std;
int main()
{
    double f, c;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> f;
    if (f < -459.4)
    {
        cout << "Error";
        return 0;
    }
    c = (f - 32.0) * 5.0 / 9.0;
    cout << "Temperature in Celsius: " << c << " °C" << endl;
    return 0;
}
*/

/*
#include <iostream>
using namespace std;
int main()
{
    int a, sum = 0;
    cout << "Enter a 4-digit number: ";
    cin >> a;
    if (a < 1000 || a > 9999)
        cout << "Error: Please enter a 4-digit number." << endl;
    else
    {
        int n = a;
        while (a > 0)
        {
            sum += a % 10;
            a /= 10;
        }
        cout << "Sum of digits of " << n << " is: " << sum << endl;
    }
}
*/

/*
#include <iostream>
using namespace std;
int main()
{
    int a, sum = 0;
    cout << "Enter a 4-digit number: ";
    cin >> a;
    if (a < 1000 || a > 9999)
        cout << "Error: Please enter a 4-digit number." << endl;
    else
    {
        int n = a;
        while (a > 0)
        {
            sum += a % 10;
            a /= 10;
        }
        cout << "Sum of digits of " << n << " is: " << sum << endl;
    }
}
*/

/*
#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    int max = (num1 > num2) ? num1 : num2;
    cout << "Larger number = " << max << endl;
}
*/


/*
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    float area = 0.0;
    cout << "Enter base of triangle: ";
    cin >> a;
    cout << "Enter height of triangle : ";
    cin >> b;
    cout << "Enter third side: ";
    cin >> c;
    if (a < 1 || b < 1 || c < 1)
        cout << "Error";
    else
    {
        if (a + b > c || c + b > a || a + c > b)
        {
            cout << "Valid triangle" << endl;
            area = 0.5 * a * b;
            cout << "Area= " << area << endl;
        }
        else
            cout << "Invalid triangle" << endl;
    }
}
*/


/*
#include <iostream>
using namespace std;
int main()
{
    double p, r, t;
    cout << "Enter the principal amount: ";
    cin >> p;
    cout << "Enter the rate of interest (in percentage): ";
    cin >> r;
    cout << "Enter the time period (in years): ";
    cin >> t;

    if (p <= 0 || r <= 0 || t <= 0)
        cout << "Error: Please enter positive values for principal, rate, and time." << endl;
    else
    {
        double compoundInterest = p * (1 + r / 100);
        for (int i = 1; i < t; ++i)
            compoundInterest *= (1 + r / 100);
        compoundInterest -= p;
        cout << "Compound Interest: " << compoundInterest << endl;
    }
}
*/
