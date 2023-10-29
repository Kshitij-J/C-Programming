/*
Kshitij Joshi C014
Anukampa decided to buy a new tablet.
His budget is B, so he cannot buy a tablet whose price is greater than B.
Other than that, he only has one criterion — the area of the tablet's screen should be as large as possible.
Of course, the screen of a tablet is always a rectangle.
Anukampa has visited some tablet shops and listed all of his options.
In total, there are N available tablets, numbered 11 through N.
For each valid i, the i-th tablet has width Wi, height Hi and price Pi.
Help Anukampa choose a tablet which he should buy and find the area of such a tablet's screen, or determine that he cannot buy any tablet.
Diplay "No tablet" if he cannot buy any tablet.
*/
#include <iostream>
using namespace std;
int main()
{
    int num, bud;
    start:
    cout << "Enter number of Tablets Available: ";
    cin >> num;
    cout << "Enter Your Budget: ";
    cin >> bud;
    int p[num], w[num], h[num], area[num];
    if (num < 1 || bud < 1)
    {
        cout << "Error! Enter positive value!" << endl;
        goto start;
    }
    for (int i = 0; i < num; i++)
    {
        cout << "\nTablet Number " << i + 1 << endl;
        cout << "Enter Price of Tablet: ";
        cin >> p[i];
        cout << "Enter Width of Tablet: ";
        cin >> w[i];
        cout << "Enter Height of Tablet: ";
        cin >> h[i];
        area[i] = h[i] * w[i];
        cout << "\n";
    }
    int max = area[0];
    int index = 0, cnt = 0;
    for (int i = 0; i < num; i++)
    {
        if (p[i] <= bud)
        {
            if (area[i] > max)
            {

                max = area[i];
                index = i;
            }
            cnt++;
        }
    }
    if (cnt == 0)
        cout << "No tablet" << endl;
    else
        cout << "Buy tablet " << index + 1 << endl;
}
