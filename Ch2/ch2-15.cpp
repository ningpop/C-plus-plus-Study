#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int user, comp;

	srand((unsigned int)time(NULL));

	cout << "가위, 바위, 보 중에 하나를 선택하시오(1, 2, 3): ";
	cin >> user;

	comp = rand() % 3 + 1;

	// cout << "computer: " << comp << endl;

	if (user == comp)
		cout << "비겼습니다." << endl;
	else if (((user == 1) && (comp == 2)) || ((user == 2) && (comp == 3)) || ((user == 3) && (comp == 1)))
		cout << "컴퓨터 승!" << endl;
	else
		cout << "사용자 승!" << endl;

	return 0;
}