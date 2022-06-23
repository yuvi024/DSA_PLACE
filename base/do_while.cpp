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

  char userChar;

  int iMin = 1;
  int iMax = 100;
  int iGuess;

  cout << "choose a number between 1 to 100: ";
  cout << "and I'll guess your number." << endl;
  cout << "press L and ENTER if my guessed number is lower than yours." << endl;
  cout << "press G and ENTER if my guessed number is greater than yours." << endl;
  cout << "press Y and ENTER if I've successfully guess your number." << endl;

  do
  {
    iGuess = generateRandomNumber(iMin, iMax);
    cout << "I guess your number is: " << iGuess << endl;
    cout << "What do you think? ";
    cin >> userChar;
    if (userChar == 'L' || userChar == '1')
    {
      iMin = iGuess + 1;
    }
    else
    {
      iMax = iGuess - 1;
    }
  } while (userChar != 'Y' && userChar != 'y');

  cout << "I've got your number." << endl;

  return 0;
}