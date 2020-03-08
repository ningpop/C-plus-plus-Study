#include <iostream>

using namespace std;

class Date {
	int year;
	int month;
	int day;

public:
	Date() {
		year = 0;
		month = 0;
		day = 0;
	}
	Date(int y, int m, int d) {
		year = y;
		month = m;
		day = d;
	}

	bool isLeapYear() {
		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
			return true;
		else
			return false;
	}
	void print() const {
		cout << year << "," << month << "," << day << endl;
	}
	Date nextMonth() {
		month++;
		return *this;
	}
};

int main()
{
	Date date{ 2017, 9, 1 };
	date.print();
	date.nextMonth().print();

	return 0;
}