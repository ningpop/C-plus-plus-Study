#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int cash = 50;
	const int goal = 250;

	int bets, win; // 각 시뮬레이션 당 베팅수, 이긴 횟수
	bool result; // 승/패 결과
	int wins = 0; // 1000번 시뮬레이션 중 이긴 횟수
	int total = 0; // 베팅한 횟수를 모두 더할 변수

	srand((unsigned int)time(NULL));

	cout << "초기 금액 $" << cash << endl;
	cout << "목표 금액 $" << goal << endl;

	// 승리확률을 알아보기 위한 1000번의 시뮬레이션
	for (int game = 0; game < 1000; game++)
	{
		cash = 50, bets = 0, win = 0; // 초기 설정 reset
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
			wins++; // 각 시뮬레이션당 승리 횟수 계산
		total += bets; // 각 시뮬레이션당 베팅 수 총합 계산
	}

	cout << "1000 중의 " << wins << "번 승리" << endl;
	cout << fixed; // 소수점 아래 자리 고정
	cout.precision(6); // 소수점 아래 6자리까지 지정
	cout << "이긴 확률=" << wins / 1000.0 * 100.0 << endl;
	cout << "평균 배팅 횟수 = " << total / 1000.0 << endl;

	return 0;
}