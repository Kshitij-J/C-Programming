#include <iostream>
using namespace std;
int main()
{
    unsigned int num;
    cout << "Enter Number of Dolls Aanchal had: ";
    cin >> num;
    cout << endl;
    unsigned int arr[num];
    cout << "Enter Type of dolls:\n\n";
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < num; i++)
    {
        for (int j = i + 1; j < num; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < num; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            i++;
        }
        else
        {
            cout << arr[i];
        }
    }

    return 0;
}
