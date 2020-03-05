#include <iostream>
#include <string>

using namespace std;

class Circle {
public:
	double calcArea();

	int radius;
	string color;
};

double Circle::calcArea() {
	return 3.14 * radius * radius;
}

int main()
{
	Circle c;
	c.radius = 10;
	cout << c.calcArea() << endl;

	return 0;
}