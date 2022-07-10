/* 
* Program to calculate average of an array
*/

#include <iostream>
using namespace std;

int main()
{
  int arr[100], n, i;
  float avg, sum = 0;

  cout << "Enter the number of elements to be inserted in array: ";
  cin >> n;

  cout << "Enter elements: ";

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    sum += arr[i];
  }

  avg = sum / n;
  cout << "Average: " << avg;

  return 0;
}