#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	int num, max;
	int count[10];

	srand((unsigned int)time(NULL));

	max = 0;

	for (int i = 0; i < 100; i++)
	{
		num = rand() % 10;
		count[num]++;

		if (count[num] > count[max])
			max = num;
	}

	cout << "���� ���� ������ ��: " << max << endl;

	return 0;
}