#include <iostream>
#include <string>

using namespace std;

class Computer {
	string name;
	int RAM;
	double cpu_speed;
public:
	void setComputer(string name, int RAM, double cpu_speed);
	void print();
};

void Computer::setComputer(string name, int RAM, double cpu_speed)
{
	this->name = name;
	this->RAM = RAM;
	this->cpu_speed = cpu_speed;
}

void Computer::print()
{
	cout << "이름: " << name << endl;
	cout << "RAM: " << RAM << endl;
	cout << "CPU 속도: " << cpu_speed << endl;
}

int main()
{
	Computer c;

	c.setComputer("오피스컴퓨터", 8, 4.2);
	c.print();

	return 0;
}