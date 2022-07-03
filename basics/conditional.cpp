#include <iostream>
using namespace std;

int main()
{
	int i;
	cout << "enter a number: ";
	cin >> i;

	if (i > 100)
	{
		cout << "entered number is greater than 100\n";
	}
	else if (i == 100)
	{
		cout << "entered number is equals to 100\n";
	}
	else
	{
		 cout << "entered number is less than 100\n";
	}

	return 0;
}