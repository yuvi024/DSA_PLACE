/*
 * Program to find the second largest element in an array
 */

#include <iostream>
using namespace std;

int main()
{
  int arr[100], n, i, largest, sec;

  cout << "Enter number of elements: ";
  cin >> n;

  cout << "Enter elements: ";

  for (i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  if (arr[0] < arr[1])
  {
    largest = arr[1];
    sec = arr[0];
  }
  else
  {
    largest = arr[0];
    sec = arr[1];
  }

  for (i = 2; i < n; i++)
  {
    if (arr[i] > largest)
    {
      sec = largest;
      largest = arr[i];
    }
    else if (arr[i] > sec && arr[i] != largest)
    {
      sec = arr[i];
    }
  }

  cout << "The second largest element of array is: " << sec;

  return 0;
}