#include <iostream>

using namespace std;

int main()
{
	int quiz1, quiz2, quiz3, mid, fin, total;

	cout << "����  #1 ����: ";
	cin >> quiz1;
	cout << "����  #2 ����: ";
	cin >> quiz2;
	cout << "����  #3 ����: ";
	cin >> quiz3;
	cout << "�߰���� ����: ";
	cin >> mid;
	cout << "�⸻��� ����: ";
	cin >> fin;

	total = quiz1 + quiz2 + quiz3 + mid + fin;

	cout << "==========================" << endl;
	cout << "���� ����: " << total << endl;
	cout << "==========================" << endl;

	return 0;
}