#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size)
{
  for (int n = 0; n < (size-1); n++)
    {
    int swapped = 0;

    for (int i = 0; i < (size-n-1); i++)
    {
      if (arr[i] > arr[i + 1])
      {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;

        swapped = 1;
      }
    }
    if (swapped == 0)
      break;
  }
}

void printarr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
    cout << "  " << arr[i];
    }
  cout << "\n";
}

int main()
{
  int data[] = {9, 2, 1, 10, 3};
  int size = sizeof(data) / sizeof(data[0]);

  bubbleSort(data, size);

  cout << "Sorted arr in Ascending Order:\n";
  printarr(data, size);
}
