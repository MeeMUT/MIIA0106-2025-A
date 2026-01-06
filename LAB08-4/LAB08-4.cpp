// TODO 1) เติม field ใน struct Student ให้ครบ: id, nickname, lineId, phone
// TODO 2) เขียน swapStudent(Student&, Student&) (ห้ามใช้ swap library)
// TODO 3) เขียน sortByID(Student[], size) ให้เรียง id น้อย -> มาก
// TODO 4) รับข้อมูล 5 คน แล้วเรียง แล้วแสดงผล
#include <iostream>
#include <string>
using namespace std;

struct Student {
	// TODO
	string id;
	string nickname;
	string lineid;
	string phone;
};

// TODO: swap เขียนเอง
void swapStudent(Student& a, Student& b) {
	// TODO
	Student tmp = a;
	a = b;
	b = tmp;
}

// TODO: sort เขียนเอง (Bubble sort)
void sortByID(Student students[], int size) {
	// TODO
	for(int i = 0; i < size - 1; i++) {

		for (int j = 0; j < size - 1; j++) {

			// j จะควบคุม column
			if (students[j].id > students[j + 1].id) {

				swapStudent(students[j], students[j + 1]);

			}
		}
	}
}

void printStudents(Student students[], int size) {
	for (int i = 0; i < size; i++) {
		// TODO: cout << students[i]...
		cout << students[i].id << "\t" << students[i].nickname << "\t" << students[i].lineid << "\t" << students[i].phone << "\n";
		cout << "----------------------\n";
	}
}

int main() {
	const int SIZE = 5;
	Student students[SIZE];
	// INPUT
	for (int i = 0; i < SIZE; i++) {
		cout << "=== Input Student " << (i + 1) << " ===\n";

		// TODO: cin >> students[i]...
		cout << "Enter of ID : ";
		cin >> students[i].id;

		cout << "Enter of Nickname : ";
		cin >> students[i].nickname;

		cout << "Enter of Line ID : ";
		cin >> students[i].lineid;

		cout << "Enter of Phone : ";
		cin >> students[i].phone;

		cout << endl;
	}

	sortByID(students, SIZE);
	cout << "\n===== Student List (Sorted by ID) =====\n";
	printStudents(students, SIZE);

	return 0;
}