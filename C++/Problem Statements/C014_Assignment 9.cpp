/*
Kshitij Joshi C014

Problem Statement
No play and eating all day makes your belly fat. This happened to Krish during the lockdown. His weight before the lockdown was w1 kg (measured on the most accurate hospital machine)
and after M months of lockdown, when he measured his weight at home (on a regular scale, which can be inaccurate), he got the result that his weight was w2 kg (w2>w1).
Scientific research in all growing kids shows that their weights increase by a value between x1 and x2 kg (inclusive) per month, but not necessarily the same value each month.
Krish assumes that he is a growing kid. Tell him whether his home scale could be giving correct results.
*/
#include <iostream>
using namespace std;
int main()
{
    int weight1, weight2, x1, x2, months;
    int difference, min, max;
    cout << "Enter weight before lockdown(Accurate): ";
    cin >> weight1;
    cout << "Enter weight at his home(Inaccurate): ";
    cin >> weight2;
    cout << "Enter minimum possible increase in weight: ";
    cin >> x1;
    cout << "Enter maximum possible increase in weight: ";
    cin >> x2;
    cout << "Enter number of months between checking weight: ";
    cin >> months;
    difference = weight2 - weight1;
    min = x1 * months;
    max = x2 * months;
    if (min <= difference && difference <= max)
        cout << "Correct result" << endl;
    else
        cout << "Incorrect result" << endl;
    return 0;
}
