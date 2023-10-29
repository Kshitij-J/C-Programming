/* C014 Kshitij Joshi
Problem Statement
There are n citizens in Narnia. It is election time in Narnia and 3 parties, A,B, and C are contesting the elections.
Party A receives Xa votes, party B receives Xb votes, and party C receives Xc votes.
The constitution of Narnia requires a particular party to receive a clear majority to form the government.
A party is said to have a clear majority if it receives strictly greater than 50 votes.
If any party has a clear majority, print the winning party (A, B or C). Otherwise, print King's & Queen's Rule.

Input
80 19 2

Output
A
*/
#include <iostream>
using namespace std;
int main()
{
    int Xa, Xb, Xc;
    cout << "Enter Votes For A: ";
    cin >> Xa;
    cout << "Enter Votes For B: ";
    cin >> Xb;
    cout << "Enter Votes For C: ";
    cin >> Xc;
    if (Xa > 50 || Xb > 50 || Xc > 50)
    {
        if (Xa > Xb && Xa > Xc)
            cout << "The winning party is A" << endl;
        else if (Xb > Xc && Xb > Xa)
            cout << "The winning party is B" << endl;
        else if (Xc > Xb && Xc > Xa)
            cout << "The winning party is C" << endl;
    }
    else
        cout << "Kings and Queens Rule" << endl;
}
