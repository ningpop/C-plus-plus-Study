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
	cout << "�̸�: " << name << endl;
	cout << "RAM: " << RAM << endl;
	cout << "CPU �ӵ�: " << cpu_speed << endl;
}

int main()
{
	Computer c;

	c.setComputer("���ǽ���ǻ��", 8, 4.2);
	c.print();

	return 0;
}