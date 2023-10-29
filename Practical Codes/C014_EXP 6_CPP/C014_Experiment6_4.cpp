#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element number " << i + 1 << " : ";
        cin >> a[i];
    }
    int j = 0, rev[n];
    for (int i = n - 1; i >= 0; i--)
    {
        rev[j] = a[i];
        j++;
    }
    cout << "\n\nOriginal array: \n";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << "\n\nReversed array: \n";
    for (int i = 0; i < n; i++)
        cout << rev[i] << " ";
}
