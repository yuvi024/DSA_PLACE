/* 
* Program to print an array 
*/

#include <iostream>
using namespace std;

int main()
{
  int arr[100], n, i;

  cout << "Enter the number of elements you want in your array: ";
  cin >> n;

  cout << "Enter the elements of array: ";
  for (i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  cout << "The resultant array is: ";
  for (i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}