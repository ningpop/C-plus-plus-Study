#include <iostream>

using namespace std;

class Complex {
public:
	double r;
	double i;

	void print();
};

void Complex::print()
{
	cout << r << " ";
	if (i >= 0)
		cout << "+ " << i << "i" << endl;
	else
		cout << "- " << -i << "i" << endl;
}

int main()
{
	Complex c1, c2;

	c1.r = 5;
	c1.i = 3;
	c1.print();

	c2.r = 3;
	c2.i = -4;
	c2.print();

	return 0;
}