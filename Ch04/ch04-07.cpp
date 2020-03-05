#include <iostream>
#include <string>

using namespace std;

class CellPhone {
	string number;
	string model;
	string color;
	bool on;

public:
	void setCellPhone(string number = "", string model = "", string color = "", bool on = false);
	void setOn();
	void print();
};

void CellPhone::setCellPhone(string number, string model, string color, bool on)
{
	this->number = number;
	this->model = model;
	this->color = color;
	this->on = on;
}

void CellPhone::setOn()
{
	if (on == false)
		on = true;
	else
		on = false;
}

void CellPhone::print()
{
	cout << number << endl;
	cout << model << endl;
	cout << color << endl;
	cout << boolalpha << on << endl;
}

int main()
{
	CellPhone cellphone1;

	cout << "CellPhone1:" << endl;
	cellphone1.setCellPhone("010-1234-5678", "Galaxy", "Black", false);
	cellphone1.setOn();
	cellphone1.print();

	return 0;
}