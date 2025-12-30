// TODO: Bubble Sort แบบมากไปน้อย ด้วย pointer
#include <iostream>
using namespace std;

void printArray(int* p, int size) {
	// TODO
	// for
	cout << "\n for loop \n";
	for (int i = 0; i < size; i++)
	{
		cout << *(p + i) << "\t";
	}
}

void swapValue(int* a, int* b) {
	// TODO
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void sortDescending(int* p, int size) {
	// TODO
	for (int i = 0; i < size; i++)
	{
		// for ของรอบ
		for (int j = 0; j < size - 1-i; j++)
		{
			// for เปรียบเทียบค่า
			if (*(p + j) < *(p + j + 1))
			{
				swapValue((p + j), (p + j + 1));
			}
		}
	}
}

int main() {

	int arr[] = { 5, 2, 9, 1, 3 };
	int size = 5;
	printArray(arr, size);
	sortDescending(arr, size);
	printArray(arr, size);

	return 0;
}