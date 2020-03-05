#include <iostream>
#include <string>

using namespace std;

class Person {
	string name;
	int age;

public:
	void setPerson(string name, int age);
	void print();
};

void Person::setPerson(string name, int age)
{
	this->name = name;
	this->age = age;
}

void Person::print()
{
	cout << "ÀÌ¸§ : " << name << endl;
	cout << "³ªÀÌ : " << age << endl;
}

int main()
{
	Person p;

	p.setPerson("±èÃ¶¼ö", 21);
	p.print();

	return 0;
}