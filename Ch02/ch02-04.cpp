#include <iostream>

using namespace std;

int main()
{
	int input;

	for (int i = 0; i < 5; i++)
	{
		cout << "정수 입력: ";
		cin >> input;

		if (input == 5)
		{
			cout << "5를 입력하였군요! 컴퓨터 승" << endl;
			break;
		}

		if (i == 4)
			cout << "인내심이 강합니다. 사용자 승" << endl;
	}

	return 0;
}