#include <iostream>
using namespace std;

void insertion_sort(int array[], int size)
{
  for (int step = 0; step < size; step++)
  {
    int key = array[step];
    int j = step - 1;

    while (key < array[j] && j >= 0)
    {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}

void print_arr(int arr[], int size)
{
  cout << "Sorted Array: ";
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
}

int main()
{
  int arr[100], n;

  cout << "Enter the number of elements to be inserted: ";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  insertion_sort(arr, n);
  print_arr(arr, n);

  return 0;
}