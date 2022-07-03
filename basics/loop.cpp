#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int generateRandomNumber(int min, int max)
{
	// static for efficiency
	// so we only calculate this value once
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);

	// evenly distrubute the random number
	// across our range
	return min + static_cast<int>((max - min + 1) * (rand() * fraction));
}

int main()
{
	// set initial seed value to system clock
	srand(static_cast<unsigned int>(time(0)));

	// loop ten times
	for (int i = 0; i < 10; i++)
	{
		cout << generateRandomNumber(0, 100) << " ";
	}
	cout << "\n";

	return 0;
}