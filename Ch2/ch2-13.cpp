#include <iostream>

using namespace std;

int main()
{
	int input;
	int a = 0, b = 1;
	int temp;

	cout << "�� �ױ��� ���ұ��: ";
	cin >> input;

	cout << a << " " << b << " ";

	for (int i = 2; i < input; i++)
	{
		temp = b;
		b = a + b;
		a = temp;

		cout << b << " ";
	}

	return 0;
}