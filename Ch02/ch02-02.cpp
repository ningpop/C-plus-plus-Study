#include <iostream>

using namespace std;

int main()
{
	int select;

	cout << "�ݶ�, ��, ��������Ʈ, �ֽ�, Ŀ�� �߿��� �ϳ��� �����ϼ���: ";
	cin >> select;

	switch (select)
	{
	case 1:
		cout << "�ݶ� �����Ͽ����ϴ�." << endl;
		break;
	case 2:
		cout << "���� �����Ͽ����ϴ�." << endl;
		break;
	case 3:
		cout << "��������Ʈ�� �����Ͽ����ϴ�." << endl;
		break;
	case 4:
		cout << "�ֽ��� �����Ͽ����ϴ�." << endl;
		break;
	case 5:
		cout << "Ŀ�Ǹ� �����Ͽ����ϴ�." << endl;
		break;
	default:
		cout << "����. ������ ��ȿ���� �ʽ��ϴ�. ���� ��ȯ�մϴ�." << endl;
		break;
	}

	return 0;
}