#include <iostream>

using namespace std;

class Complex {
	double r;
	double i;
public:
	Complex() {
		r = 0;
		i = 0;
	}
	Complex(double _r, double _i) {
		r = _r;
		i = _i;
	}

	double getR() { return r; }
	double getI() { return i; }
	void setR(double r) { this->r = r; }
	void setI(double i) { this->i = i; }

	void print() {
		cout << "(" << r;
		if (i >= 0)
			cout << " + " << i << "i)";
		else
			cout << " - " << -i << "i)";
	}
};

Complex add(Complex a, Complex b)
{
	Complex result;

	result.setR(a.getR() + b.getR());
	result.setI(a.getI() + b.getI());
	
	return result;
}

int main()
{
	Complex A{ 5, 3 };
	Complex B{ 3, -4 };
	Complex result;

	A.print();
	cout << "+";
	B.print();
	cout << "=";
	add(A, B).print();
	cout << endl;

	return 0;
}