#include <iostream>
using namespace std;
int main()
{
    int n, oddc = 0, evenc = 0;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "\n";
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element number " << i + 1 << " : ";
        cin >> a[i];
        if (a[i] % 2 == 0)
            evenc++;
        else
            oddc++;
    }
    int odd[oddc], even[evenc], j = 0, k = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            even[j] = a[i];
            j++;
        }
        else
        {
            odd[k] = a[i];
            k++;
        }
    }
    cout << "\n\nPrinting Array:\n";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "\n\nPrinting even numbers from array:\n";
    for (int i = 0; i < evenc; i++)
        cout << even[i] << " ";
    cout << "\n\nPrinting odd numbers from array: \n";
    for (int i = 0; i < oddc; i++)
        cout << odd[i] << " ";
}
