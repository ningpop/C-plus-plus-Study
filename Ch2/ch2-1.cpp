#include <iostream>
#include <string>

using namespace std;

int main()
{
	string a, b;

	cout << "ù ��° ���ڿ�: ";
	cin >> a;
	cout << "�� ��° ���ڿ�: ";
	cin >> b;

	if (a == b)
		cout << "2���� ���ڿ��� �����ϴ�." << endl;
	else
		cout << "2���� ���ڿ��� �ٸ��ϴ�." << endl;

	return 0;
}