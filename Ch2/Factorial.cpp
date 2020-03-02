#include <iostream>

using namespace std;

int main()
{
	long fact = 1;
	int n;

	cout << "정수를 입력하시오: ";
	cin >> n;

	for (int i = 1; i <= n; i++)
		fact = fact * i;

	cout << n << "!은 " << fact << " 입니다.\n";

	return 0;
}