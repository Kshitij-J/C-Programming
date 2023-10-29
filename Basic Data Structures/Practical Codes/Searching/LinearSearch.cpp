#include <iostream>

using namespace std;

int main()
{
    int size;
    int elem;

    cout << "\nEnter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "\nEnter the array: " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    cin >> elem;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == elem)
        {
            cout << "\nFound";
            return 0;
        }
    }

    cout << "\nNot Found";
}
