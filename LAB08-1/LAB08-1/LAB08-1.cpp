// TODO 1) เติม field ใน struct Student ให้ครบ: id, nickname, lineId, phone
// TODO 2) รับค่าจากผู้ใช้เก็บลง s1
// TODO 3) แสดงผลข้อมูลของ s1
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

	Student s1; // ตัวแปรเดี่ยวของ struct

	cout << "=== Input Student 1 ===\n";
	// TODO: cin >> ...
	cout << "Enter of ID : ";
	cin >> s1.id;

	cout << "Enter of Nickname : ";
	cin >> s1.nickname;

	cout << "Enter of Line ID : ";
	cin >> s1.lineid;

	cout << "Enter of Phone : ";
	cin >> s1.phone;

	cout << "\n=== Output Student 1 ===\n";
	// TODO: cout << ...
	cout << "ID \tNickname \tLineID \tPhone\n";
	cout << s1.id << "\t" << s1.nickname << "\t" << s1.lineid << "\t" << s1.phone << "\n";

	return 0;
}