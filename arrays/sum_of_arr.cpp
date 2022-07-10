/* 
* Program to calculate sum of an array 
*/

#include <iostream>
using namespace std;

int main()
{
  int n, arr[100], sum = 0;
  cout << "Enter the number of elements: ";
  cin >> n;

  cout << "Enter the elements of array: ";

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    sum += arr[i];
  }

  cout << "The sum of array is: " << sum;

  return 0;
}