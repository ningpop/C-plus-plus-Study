#include <iostream>

using namespace std;

int main()
{
	int input = 0, total = 0;

	do {
		total += input;

		cout << "정수를 입력하시오: ";
		cin >> input;
	} while (input != 0);

	cout << "합계: " << total << endl;

	return 0;
}