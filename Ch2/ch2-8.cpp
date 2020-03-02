#include <iostream>

using namespace std;

int main()
{
	int input;

	cout << "정수를 입력하시오: ";
	cin >> input;

	for (int i = 1; i <= input; i++)
		if (input % i == 0)
			cout << i << " ";

	return 0;
}