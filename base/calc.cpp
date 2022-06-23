#include <iostream>
using namespace std;

int main()
{

	int i, a, b, r;

	cout << "|| SIMPLE CALCULATOR ||" << endl;
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
	cout << "Enter your choice: ";
	cin >> i;

	cout << "Enter first number: ";
	cin >> a;

	cout << "Enter second number: ";
	cin >> b;

	if (i == 1)
	{
		r = a + b;
	}
	else if (i == 2)
	{
		r = a = b;
	}
	else if (i == 3)
	{
		r = a * b;
	}
	else if (i == 4)
	{
		r = a / b;
	}

	cout << "Result: " << r;

	return 0;
}