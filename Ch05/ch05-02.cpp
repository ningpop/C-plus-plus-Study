#include <iostream>
#include <string>

using namespace std;

class Airplane {
	int number;
	string name;
	int capacity;
	int speed;
public:
	Airplane() {
		number = 0;
		name = "";
		capacity = 0;
		speed = 0;
	}
	Airplane(int num, string n = "", int c = 0, int s = 0) {
		number = num;
		name = n;
		capacity = c;
		speed = s;
	}
	string getName() { return name; }
	int getCapacity() { return capacity; }
	int getSpeed() { return speed; }
	void setName(string n) { name = n; }
	void setCapacity(int c) { capacity = c; }
	void setSpeed(int s) { speed = s; }

	void print() {
		cout << "����� #" << number << endl;
		cout << "������� �̸�: " << name << endl;
		cout << "������� �뷮: " << capacity << endl;
		cout << "������� �ӵ�: " << speed << " Km/h" << endl;
	}
};

int main()
{
	Airplane airplane1{ 1, "���� 787", 900, 300 };
	airplane1.print();

	cout << endl;

	Airplane airplane2{ 2, "������� 350", 400, 1000 };
	airplane2.print();

	return 0;
}