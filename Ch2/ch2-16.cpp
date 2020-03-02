#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int cash = 50;
	const int goal = 250;

	int bets, win; // �� �ùķ��̼� �� ���ü�, �̱� Ƚ��
	bool result; // ��/�� ���
	int wins = 0; // 1000�� �ùķ��̼� �� �̱� Ƚ��
	int total = 0; // ������ Ƚ���� ��� ���� ����

	srand((unsigned int)time(NULL));

	cout << "�ʱ� �ݾ� $" << cash << endl;
	cout << "��ǥ �ݾ� $" << goal << endl;

	// �¸�Ȯ���� �˾ƺ��� ���� 1000���� �ùķ��̼�
	for (int game = 0; game < 1000; game++)
	{
		cash = 50, bets = 0, win = 0; // �ʱ� ���� reset
		while (true)
		{
			bets++;
			if ((double)rand() / RAND_MAX < 0.5)
			{
				cash++;
				win++;
			}
			else
				cash--;

			if (cash <= 0)
			{
				result = false;
				break;
			}
			if (cash >= goal)
			{
				result = true;
				break;
			}
		}

		if (result == true)
			wins++; // �� �ùķ��̼Ǵ� �¸� Ƚ�� ���
		total += bets; // �� �ùķ��̼Ǵ� ���� �� ���� ���
	}

	cout << "1000 ���� " << wins << "�� �¸�" << endl;
	cout << fixed; // �Ҽ��� �Ʒ� �ڸ� ����
	cout.precision(6); // �Ҽ��� �Ʒ� 6�ڸ����� ����
	cout << "�̱� Ȯ��=" << wins / 1000.0 * 100.0 << endl;
	cout << "��� ���� Ƚ�� = " << total / 1000.0 << endl;

	return 0;
}