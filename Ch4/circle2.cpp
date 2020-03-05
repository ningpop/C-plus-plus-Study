#include <iostream>

using namespace std;

class Circle {
public:
	int radius;
	string color;

	double calcArea() {
		return 3.14 * radius * radius;
	}
};

int main()
{
	Circle pizza1, pizza2;

	pizza1.radius = 100;
	pizza1.color = "yellow";
	cout << "피자의 면적=" << pizza1.calcArea() << endl;

	pizza2.radius = 200;
	pizza2.color = "white";
	cout << "피자의 면적=" << pizza2.calcArea() << endl;

	return 0;
}