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

	cout << "�����ﰢ���� �Ѻ�: ";
	cin >> x;
	cout << "�����ﰢ���� �Ѻ�: ";
	cin >> y;

	result = hypot(x, y);

	cout << "����: " << result << endl;

	return 0;
}