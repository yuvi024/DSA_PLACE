/* 
* Program to find the largest element of an array 
*/

#include <iostream>
using namespace std;

int main()
{
  int arr[100], n, i;

  cout << "Enter the number of elements for array: ";
  cin >> n;

  cout << "Enter elements: ";

  for (i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  for (i = 0; i < n; i++)
  {
    if (arr[0] < arr[i])
    {
      arr[0] = arr[i];
    }
  }

  cout << "The largest element in the array is: " << arr[0];

  return 0;
}