#include <iostream>

using namespace std;

class Time {
public:
	int hour;
	int minute;

	void print() {
		cout << hour << ":" << minute << endl;
	}
};