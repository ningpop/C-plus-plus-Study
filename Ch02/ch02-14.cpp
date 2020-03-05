#include <iostream>

using namespace std;

int main()
{
	char op;
	int x, y, result;

	cout << "연산의 종류: ";
	cin >> op;

	cout << "숫자를 입력하시오: ";
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
			cout << "분모가 0입니다. 나눗셈을 할 수 없습니다." << endl;
			result = 0;
			break;
		}
		result = x / y;
		break;
	default:
		break;
	}

	cout << "계산의 결과: " << result << endl;

	return 0;
}