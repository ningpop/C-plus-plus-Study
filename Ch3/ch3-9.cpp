#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	int dice1, dice2;
	int result;

	srand((unsigned int)time(NULL));

	dice1 = rand() % 6 + 1;
	dice2 = rand() % 6 + 1;

	result = dice1 + dice2;

	cout << "������� �ֻ���: " << dice1 << "+" << dice2 << "=" << result << endl;

	if (result == 7 || result == 11)
		cout << "����ڰ� �̰���ϴ�." << endl;
	else if (result == 2 || result == 3 || result == 12)
		cout << "����ڰ� �����ϴ�." << endl;

	return 0;
}