#include <iostream>
using namespace std;

int main()
{
  int arr[100], n;

  cout << "Enter the number of elements: ";
  cin >> n;

  cout << "Enter elements: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  for (int i = 0; i < n; i++)
  {
    if (arr[0] < arr[i])
    {
      arr[0] = arr[i];
    }
  }

  cout << "Largest number: " << arr[0];

  return 0;
}