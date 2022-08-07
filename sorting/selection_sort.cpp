#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void selection_sort(int array[], int size)
{
  for (int step = 0; step < size - 1; step++)
  {
    int min_index = step;
    for (int i = step + 1; i < size; i++)
    {
      if (array[i] < array[min_index])
      {
        min_index = i;
      }

      swap(&array[min_index], &array[step]);
    }
  }
}

int main()
{
  int arr[100], n;

  cout << "Enter number of elements to be inserted: ";
  cin >> n;

  cout << "Enter elements: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  selection_sort(arr, n);

  cout << "Sorted array: ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}