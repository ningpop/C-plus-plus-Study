#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	const double pi = 3.14;
	double radius, superficial, volume;

	cout << "������: ";
	cin >> radius;

	superficial = 4 * pi * pow(radius, 2);
	volume = 4 / 3 * pi * pow(radius, 3);

	cout << "ǥ����: " << superficial << endl;
	cout << "����: " << volume << endl;

	return 0;
}