#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Student {
	string name;
	double marks;

public:
	Student() :name{ "" }, marks{ 0.0 }{}
	Student(string n, double m) :name{ n }, marks{ m }{}

	double getMarks() { return marks; }
	void print() {
		cout << "�̸� : " << name << endl;
		cout << "���� : " << marks << endl;
	}
};

bool compare(Student& a, Student& b) {
	return a.getMarks() > b.getMarks();
}

int main()
{
	string name;
	double marks;

	vector<Student> student(3);

	cout << "===============================" << endl;
	for (auto& e : student) {
		cout << "�̸� : ";
		cin >> name;
		cout << "���� : ";
		cin >> marks;

		e = Student(name, marks);
	}
	cout << "===============================" << endl;

	sort(student.begin(), student.end(), compare);

	cout << "===============================" << endl;
	cout << "���� ���" << endl;
	cout << "===============================" << endl;
	for (auto& e : student)
		e.print();
	cout << "===============================" << endl;

	return 0;
}