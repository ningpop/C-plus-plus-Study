#include <iostream>

using namespace std;

int main()
{
	char op;
	int x, y, result;

	cout << "������ ����: ";
	cin >> op;

	cout << "���ڸ� �Է��Ͻÿ�: ";
	cin >> x >> y;

	switch (op)
	{
	case '+':
		result = x + y;
		break;
	case '-':
		result = x - y;
		break;
	case '*':
		result = x * y;
		break;
	case '/':
		if (y == 0)
		{
			cout << "�и� 0�Դϴ�. �������� �� �� �����ϴ�." << endl;
			result = 0;
			break;
		}
		result = x / y;
		break;
	default:
		break;
	}

	cout << "����� ���: " << result << endl;

	return 0;
}