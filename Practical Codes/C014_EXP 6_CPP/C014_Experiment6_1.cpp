#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int a[n], ans[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element number " << i + 1 << " : ";
        cin >> a[i];
        ans[i] = a[i] * 5;
    }
    cout << "\nPrinting Array: \n";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "\n";
    cout << "\nPrinting each element of array multiplied by 5: \n";
    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
}
