// TODO 1) เติม field ใน struct Student ให้ครบ: id, nickname, lineId, phone
// TODO 2) รับค่าข้อมูลนักศึกษา 5 คน เก็บลง students[i]
// TODO 3) แสดงผลข้อมูลนักศึกษาทั้ง 5 คน
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

int main() {
	const int SIZE = 5;
	Student students[SIZE]; // Array ของ struct
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

	// OUTPUT
	cout << "\n===== Student List =====\n";
	cout << "ID \tNickname \tLineID \tPhone\n";
	for (int i = 0; i < SIZE; i++) {
		// TODO: cout << students[i]...
		cout << students[i].id << "\t" << students[i].nickname << "\t" << students[i].lineid << "\t" << students[i].phone << "\n";
		cout << "----------------------\n";
	}

	return 0;
}