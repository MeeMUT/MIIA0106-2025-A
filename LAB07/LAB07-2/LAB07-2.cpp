// TODO: แสดงค่า score, address และ pointer
#include <iostream>
using namespace std;

int main() {
	int score = 50;
	int* ptr = &score;

	// TODO
	cout << score << endl;
	cout << *ptr << endl;

	cout << "address of score\t" << &score << endl;
	cout << "value of ptr\t\t" << ptr << endl;
	cout << "address of pointer\t" << &ptr << endl;

	return 0;
}
