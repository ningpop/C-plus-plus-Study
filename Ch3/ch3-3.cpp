#include <iostream>
#include <math.h>

using namespace std;

double hypot(double a, double b)
{
	double c;
	c = sqrt(pow(a, 2) + pow(b, 2));

	return c;
}

int main()
{
	double x, y;
	double result;

	cout << "직각삼각형의 한변: ";
	cin >> x;
	cout << "직각삼각형의 한변: ";
	cin >> y;

	result = hypot(x, y);

	cout << "빗변: " << result << endl;

	return 0;
}