#include <iostream>
using namespace std;
int main()
{
    int a[3][3], data, max = -2147483648;// max -2147483648 is the maximum int value
    cout << "\nEnter values of the Matrix :\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter element at index [" << i + 1 << "][" << j + 1 << "] : ";
            cin >> data;
            a[i][j] = data;
            if (a[i][j] > max)
                max = a[i][j];
        }
    }
    cout << "\n\nMaximum value from array: " << max << endl;
}
