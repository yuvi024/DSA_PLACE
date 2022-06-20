#include <iostream>
using namespace std;

int log2n(int n)
{
  // if (n > 1)
  // {
  //   return 1 + log2n(n / 2);
  // }
  // else
  // {
  //   return 0;
  // }
  return (n > 1) ? 1 + log2n(n / 2) : 0;
}

int main()
{
  int n = 8;
  cout << log2n(n);
  return 0;
}