#include <iostream>

using namespace std;

int main()
{
	int number;
	cout << "���ڸ� �Է��Ͻÿ�:";
	cin >> number;
	switch (number)
	{
	case 0:
		cout << "zero\n";
		break;
	case 1:
		cout << "one\n";
		break;
	case 2:
		cout << "two\n";
		break;
	default:
		cout << "many\n";
		break;
	}

	return 0;
}