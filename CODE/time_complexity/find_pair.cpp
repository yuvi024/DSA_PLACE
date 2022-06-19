#include <iostream>
using namespace std;

// function to find a pair in the given array whose sum is equal to z
bool findPair(int a[], int n, int z)
{
  // iterate through all the pairs
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      // check if the sum of the pair
      // (a[i], a[j]) is equal to z
      if (i != j && a[i] + a[j] == z)
      {
        return true;
      }
    }
    return false;
  }
}

int main()
{
  int a[] = {1, -2, 1, 0, 5};
  int z = 0;
  int n = sizeof(a) / sizeof(a[0]);

  if (findPair(a, n, z))
  {
    cout << "True" << endl;
  }
  else
  {
    cout << "False" << endl;
  }
  return 0;
}