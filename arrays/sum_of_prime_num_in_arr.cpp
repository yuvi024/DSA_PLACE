#include <iostream>
using namespace std;

class primeSum
{
public:
  int findPrimeSum(int n)
  {
    int arr[n + 1] = {0};
    for (int i = 2; i < n; i++)
    {
      for (int j = i * i; j < n; j += i)
      {
        arr[j - 1] = 1;
      }
    }
    int sumVal;
    for (int i = 2; i < n; i++)
    {
      if (arr[i - 1] == 0)
        sumVal += i;
    }
    return sumVal;
  }
};

int main()
{
  primeSum sumObj;
  int i;

  cout << "Enter number: ";
  cin >> i;

  cout << "Sum: " << sumObj.findPrimeSum(i);

  return 0;
}