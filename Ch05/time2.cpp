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