#include <iostream>
#include <string>

using namespace std;

int main()
{
	int num;

	cout << "�󸶳� ���� �̸��� �Է� �Ͻðڽ��ϱ�? ";
	cin >> num;

	string *names = new string[num];

	for (int i = 0; i < num; i++) {
		cout << "�̸� �Է� # " << i + 1 << ": ";
		cin >> names[i];
	}
	cout << endl;

	cout << "������ �̸� ����Դϴ�." << endl;
	for (int i = 0; i < num; i++)
		cout << "�̸� #" << i + 1 << ": " << names[i] << endl;

	delete[] names;

	return 0;
}