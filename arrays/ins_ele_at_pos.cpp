/* 
* Program to insert an element at a position in an array 
*/

#include <iostream>
using namespace std;

int main()
{
  int arr[100], pos, i, n, val;

  cout << "Enter the number of element to be inserted in the array: ";
  cin >> n;

  cout << "Enter elements: ";

  for (i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  cout << "Enter the position where you want the element to be: ";
  cin >> pos;

  cout << "Enter the value to be inserted: ";
  cin >> val;

  for (i = n - 1; i >= pos - 1; i--)
  {
    arr[i + 1] = arr[i];
  }

  arr[pos - 1] = val;

  cout << "Resultant array is: ";

  for (i = 0; i <= n; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}