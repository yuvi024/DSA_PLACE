#include <iostream>
using namespace std;

int main()
{
  int arr[12] = {1, 2, 3, 4};

  int n, i;

  cout << "Enter number: ";
  cin >> n;

  cout << "Enter index: ";
  cin >> i;

  arr[i] = n;

  for (int i = 0; i < 12; i++)
  {
    cout << arr[i] << ", ";
  }

  return 0;
}