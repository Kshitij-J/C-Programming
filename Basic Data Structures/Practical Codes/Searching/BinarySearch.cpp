#include <iostream>

using namespace std;

int main()
{
    int size;
    int low = 0;
    int mid = 0;
    int elem;

    cout << "Enter the size of the array: ";
    cin >> size;

    int high = size;
    int arr[size];

    cout << "\nEnter the array: " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    cout << "Enter the element: ";
    cin >> elem;

    for (int i = 0; i < high; i++)
    {
        mid = (low + high) / 2;
        if (arr[mid] == elem)
        {
            cout << "\nFound";
            return 0;
        }
        else if (elem < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    cout << "\nNot Found";
}
