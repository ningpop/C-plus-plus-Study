#include <iostream>

using namespace std;

int main()
{
	int i = 0;
	do {
		i++;
		cout << "continue ���� ���� �ִ� ����" << endl;
		continue;
		cout << "continue ���� �Ŀ� �ִ� ����" << endl;
	} while (i < 3);

	return 0;
}