#include <iostream>

using namespace std;

int main()
{
	int num;

	cout << "�� ���� ������ �Է��մϱ�? ";
	cin >> num;

	int* p = new int[num];

	for (int i = 0; i < num; i++) {
		cout << "������ �Է��Ͻÿ� : ";
		cin >> p[i];
	}
	
	cout << "�Էµ� ������: ";
	for (int i = 0; i < num; i++)
		cout << p[i] << ", ";
	cout << endl;

	delete[] p;

	return 0;
}