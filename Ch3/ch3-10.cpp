#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	int coin1 = 0, coin2 = 0;
	int result;

	srand((unsigned int)time(NULL));

	for (int i = 0; i < 100; i++)
	{
		result = rand() % 2;

		if (result == 0)
			coin1++;
		else
			coin2++;
	}

	cout << "������ �ո�: " << coin1 << endl;
	cout << "������ �޸�: " << coin2 << endl;
	

	return 0;
}