#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int user, comp;

	srand((unsigned int)time(NULL));

	cout << "����, ����, �� �߿� �ϳ��� �����Ͻÿ�(1, 2, 3): ";
	cin >> user;

	comp = rand() % 3 + 1;

	// cout << "computer: " << comp << endl;

	if (user == comp)
		cout << "�����ϴ�." << endl;
	else if (((user == 1) && (comp == 2)) || ((user == 2) && (comp == 3)) || ((user == 3) && (comp == 1)))
		cout << "��ǻ�� ��!" << endl;
	else
		cout << "����� ��!" << endl;

	return 0;
}