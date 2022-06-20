#include <iostream>
using namespace std;

// O(n^2)
int square(int n)
{
  cout << "square" << endl;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << i << j << endl;
    }
  }
}

// O(n^3)
int cube(int n)
{
  cout << "cube" << endl;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      for (int k = 0; k < n; k++)
      {
        cout << i << j << k << endl;
      }
    }
  }
}

int main()
{
  int n = 4;
  square(n);
  cube(n);
  return 0;
}