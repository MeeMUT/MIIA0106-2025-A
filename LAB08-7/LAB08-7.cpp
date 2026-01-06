#include <iostream>
using namespace std;

// โครงสร้าง Parent
struct Parent {
	string name;
	string relationship;
	string contact;
};
// โครงสร้าง Phone
struct Phone {
	string mobile;
	string home;
};
// โครงสร้าง Student
struct Student {
	string id;
	string nickname;
	string lineid;
	Phone myContact; // struct ซ้อน struct
	Parent myParent; // struct ซ้อน struct
};

void inputStudent(Student& student) {
	cout << "Enter Student Information\n";
	cout << "ID: ";
	cin >> student.id;
	cout << "Nickname: ";
	cin >> student.nickname;
	cout << "Line ID: ";
	cin >> student.lineid;
	cout << "Phone - Mobile Number: ";
	cin >> student.myContact.mobile;
	cout << "Phone - Home Number: ";
	cin >> student.myContact.home;
	cout << "Parent - Name: ";
	cin >> student.myParent.name;
	cout << "Parent - Relationship: ";
	cin >> student.myParent.relationship;
	cout << "Parent - Number: ";
	cin >> student.myParent.contact;
}

void printStudent(const Student & student) {
		cout << "\n===== Student Data =====\n";
		cout << "ID : " << student.id << endl;
		cout << "Nickname : " << student.nickname << endl;
		cout << "Line ID : " << student.lineid << endl;

		cout << "\n===== Student's Contact Info =====\n";
		cout << "Mobile Number : " << student.myContact.mobile << endl;
		cout << "Home Number : " << student.myContact.home << endl;

		cout << "\n===== Parent Data =====\n";
		cout << "Parent's Name : " << student.myParent.name << endl;
		cout << "Relationship : " << student.myParent.relationship << endl;

		cout << "\n===== Parent's Contact Info =====\n";
		cout << "Parent's Mobile Number : " << student.myParent.contact << endl;
}

int main() {
	Student student;
	inputStudent(student);
	printStudent(student);
	return 0;
}