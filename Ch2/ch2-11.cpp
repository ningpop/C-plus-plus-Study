#include <iostream>

using namespace std;

int main()
{
	int n, result = 0;

	cout << "n값을 입력하시오: ";
	cin >> n;

	for (int i = 1; i <= n; i++)
		result += i * i;

	cout << "계산값은 " << result << "입니다." << endl;

	return 0;
}