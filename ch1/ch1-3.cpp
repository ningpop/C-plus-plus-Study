#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int a, b, result;

	cout << "ù ��° ��: ";
	cin >> a;
	cout << "�� ��° ��: ";
	cin >> b;

	result = sqrt(a * a + b * b);

	cout << "���� ����: " << result << endl;

	return 0;
}