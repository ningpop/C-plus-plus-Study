#include <iostream>
#include <math.h>

using namespace std;

inline double calc_volume(double radius)
{
	double result;
	result = (4.0 / 3.0 * 3.14 * pow(radius, 3));
	return result;
}

int main()
{
	double input, volume;

	cout << "�������� �Է��Ͻÿ�: ";
	cin >> input;

	volume = calc_volume(input);

	cout << "���� ���Ǵ� " << volume << endl;

	return 0;
}