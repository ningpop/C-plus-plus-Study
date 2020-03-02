#include <iostream>

using namespace std;

int main()
{
	int input;
	int a = 0, b = 1;
	int temp;

	cout << "몇 항까지 구할까요: ";
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