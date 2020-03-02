#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	const double pi = 3.14;
	double radius, superficial, volume;

	cout << "반지름: ";
	cin >> radius;

	superficial = 4 * pi * pow(radius, 2);
	volume = 4 / 3 * pi * pow(radius, 3);

	cout << "표면적: " << superficial << endl;
	cout << "부피: " << volume << endl;

	return 0;
}