#include <iostream>

using namespace std;

class Time {
public:
	int hour;
	int minute;

	Time() {
		hour = 0;
		minute = 0;
	}
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
	Time a;
	Time b{ 10, 25 };

	a.print();
	b.print();

	return 0;
}