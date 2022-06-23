#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int generateRandomNumber(int min, int max)
{
  static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);

  return min + static_cast<int>((max - min + 1) * (rand() * fraction));
}

int main()
{
  srand(static_cast<unsigned int>(time(0)));

  int computerNumber = generateRandomNumber(1, 100);

  int userNumber;
  cout << "enter a number between 1 to 100: ";
  cin >> userNumber;

  while (userNumber != computerNumber)
  {
    cout << userNumber << " is ";
    if (userNumber > computerNumber)
    {
      cout << "greater";
    }
    else
    {
      cout << "lower";
    }
    cout << " than computer's number" << endl;
    cout << "choose another number: ";
    cin >> userNumber;
  }

  cout << "correct number!" << endl;
  return 0;
}