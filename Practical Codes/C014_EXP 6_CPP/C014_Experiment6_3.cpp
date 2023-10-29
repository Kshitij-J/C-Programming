#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int a[n], dup[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element number " << i + 1 << " : ";
        cin >> a[i];
        dup[i] = a[i];
    }
    cout << "\n\nPrinting Original Array:\n";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "\n\nPrinting Duplicate Array:\n";
    for (int i = 0; i < n; i++)
        cout << dup[i] << " ";
}
