#include <iostream>
using namespace std;

int main()
{
	int a, b;

	srand(time(0));
	a = rand() % 100 + 1;

	cout << "Number Guessing Game (1-100)" << endl;
	do
	{
		cout << "Please try to guess the number" << endl;
		cin >> b;

		if (b > a)
		{
			cout << "Too much" << endl;
		}
		else if (b < a)
		{
			cout << "Too few" << endl;
		}
		else
		{
			cout << "Correct!" << endl;
		}

	} while (b != a);
}