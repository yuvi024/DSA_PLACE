#include <iostream>
using namespace std;

float logn(float n)
{
  while (n > 1)
  {
    // n = n / 2 - 1;
    n = n / 2;
    return n;
  }
}

int main()
{
  cout << logn(8);
  return 0;
}