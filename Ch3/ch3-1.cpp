#include <iostream>

using namespace std;

int maximum(int, int, int);

int main()
{
	int a, b, c;
	int result;

	cout << "3개의 정수를 입력하시오: ";
	cin >> a >> b >> c;

	result = maximum(a, b, c);

	cout << "가장 큰 정수는 " << result << endl;

	return 0;
}

int maximum(int x, int y, int z)
{
	if (x > y)
	{
		if (x > z)
			return x;
		else
			return z;
	}
	else
	{
		if (y > z)
			return y;
		else
			return z;
	}
}