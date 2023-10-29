#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter number of rows(m): ";
    cin >> m;
    cout << "Enter number of columns(n): ";
    cin >> n;
    int a[m][n], sum = 0, data;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Enter element at index [" << i + 1 << "][" << j + 1 << "] : ";
            cin >> data;
            a[i][j] = data;
            sum += data;
        }
    }
    cout << "\n2D Matrix:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\nSum of elements of 2d array = " << sum << endl;
}
