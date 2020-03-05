#include <iostream>
#include <string>

using namespace std;

class Employee {
	string name;
	int age;
	int salary;
public:
	void setEmployee(string name, int age, int salary);
	void print();
};

void Employee::setEmployee(string name = "", int age = 0, int salary = 0)
{
	this->name = name;
	this->age = age;
	this->salary = salary;
}

void Employee::print()
{
	cout << name << endl;
	cout << age << endl;
	cout << salary << endl;
}

int main()
{
	Employee employee1;

	employee1.setEmployee("±èÃ¶¼ö", 38, 2000000);
	cout << "Employee1:" << endl;
	employee1.print();

	return 0;
}