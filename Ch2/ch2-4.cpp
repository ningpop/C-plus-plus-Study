#include <iostream>

using namespace std;

int main()
{
	int input;

	for (int i = 0; i < 5; i++)
	{
		cout << "���� �Է�: ";
		cin >> input;

		if (input == 5)
		{
			cout << "5�� �Է��Ͽ�����! ��ǻ�� ��" << endl;
			break;
		}

		if (i == 4)
			cout << "�γ����� ���մϴ�. ����� ��" << endl;
	}

	return 0;
}