#include <iostream>

using namespace std;

int main()
{
	int input = 0, total = 0;

	do {
		total += input;

		cout << "������ �Է��Ͻÿ�: ";
		cin >> input;
	} while (input != 0);

	cout << "�հ�: " << total << endl;

	return 0;
}