#include <iostream>

using namespace std;

class Time {
private:
	int hour;
	int minute;
	int second;
public:
	void setTime(const int h = 0, const int m = 0, const int s = 0);
	void print() const;
};

void Time::setTime(const int h, const int m, const int s)
{
	hour = h;
	minute = m;
	second = s;
}

void Time::print() const
{
	cout.width(2);
	cout.fill('0');
	cout << hour << ":" << minute << ":" << second << endl;
}

int main()
{
	Time time;

	time.setTime(7, 10, 20);
	time.print();

	return 0;
}