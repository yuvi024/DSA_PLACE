#include <iostream>
using namespace std;

void print_arr(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void swap(int *a, int *b)
{
  int t = *a;
  *a = *b;
  *b = t;
}

int partition(int arr[], int low, int high)
{
  int pivot = arr[high];

  int i = (low - 1);

  for (int j = low; j < high; j++)
  {
    if (arr[j] <= pivot)
    {
      i++;
      swap(&arr[i], &arr[j]);
    }
  }

  swap(&arr[i + 1], &arr[high]);

  return (i + 1);
}

void quicksort(int arr[], int low, int high)
{
  if (low < high)
  {
    int part = partition(arr, low, high);
    quicksort(arr, low, part - 1);
    quicksort(arr, part + 1, high);
  }
}

int main()
{
  int n;

  cout << "Enter the number of elements to be inserted: ";
  cin >> n;

  int arr[100];

  cout << "Enter elements: ";

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  cout << "Unsorted array: ";
  print_arr(arr, n);

  quicksort(arr, 0, n - 1);

  cout << "Sorted array: ";
  print_arr(arr, n);

  return 0;
}