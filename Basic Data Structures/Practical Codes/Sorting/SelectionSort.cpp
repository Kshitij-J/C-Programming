#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void printarr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
    cout << arr[i] << " ";
    }
  cout << endl;
}

void selectionSort(int arr[], int size)
{
  for (int step = 0; step < size - 1; step++)
    {
    int min_idx = step;
    for (int i = step + 1; i < size; i++)
    {
      if (arr[i] < arr[min_idx])
        min_idx = i;
    }
    swap(&arr[min_idx], &arr[step]);
  }
}

int main()
{
  int data[] = {9, 5, 1, 4, 3};
  int size = sizeof(data) / sizeof(data[0]);
  selectionSort(data, size);
  cout << "Sorted arr in Ascending Order:\n";
  printarr(data, size);
}
