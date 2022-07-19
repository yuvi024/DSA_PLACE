#include <iostream>
using namespace std;

void find_three_largest(int arr[], int arr_size)
{
  int i, first, second, third;

  if (arr_size < 3)
  {
    cout << "Invalid Input!" << endl;
  }

  third = second = first = 0;

  for (i = 0; i < arr_size; i++)
  {
    if (arr[i] > first)
    {
      third = second;
      second = first;
      first = arr[i];
    }
    else if (arr[i] > second)
    {
      third = second;
      second = arr[i];
    }
    else if (arr[i] > third)
    {
      third = arr[i];
    }
  }
  cout << "Three largest elements are: " << first << " " << second << " " << third;
}

int main()
{
  int n, arr[100];
  
  cout << "Enter the number of elements of array: ";
  cin >> n;

  cout << "Enter element of array: ";
  
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  find_three_largest(arr, n);

  return 0;
}