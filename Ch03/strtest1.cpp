#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1, addr;

	cout << "�̸��� �Է��Ͻÿ�: ";
	cin >> s1;
	cin.ignore();

	cout << "�ּҸ� �Է��Ͻÿ�: ";
	getline(cin, addr);
	cout << addr << "�� " << s1 << "�� �ȳ��ϼ���? " << endl;
	return 0;
}