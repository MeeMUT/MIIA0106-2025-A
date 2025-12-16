#include <iostream>
using namespace std;

int main()
{
	int a;

	cout << "Enter a number you want" << endl;
	cin >> a;
	cout << "Multiplication table" << a << endl;

	for (int i = 1; i <= 12; i++)
	{
		cout << a << "x" << i << "=" << a * i << endl;
	}
	return 0;

}