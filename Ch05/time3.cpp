#include <iostream>

using namespace std;

class Time {
public:
	int hour;
	int minute;

	Time(int h, int m) {
		hour = h;
		minute = m;
	}
	void print() {
		cout << hour << ":" << minute << endl;
	}
};

int main()
{
	//Time a;
	Time b(10, 25);
	Time c{ 10, 25 };
	Time d = { 10,25 };

	b.print();
	c.print();
	d.print();

	return 0;
}