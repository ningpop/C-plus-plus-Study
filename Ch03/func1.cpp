#include <iostream>
using namespace std;

int max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

int main()
{
	int n;
	n = max(2, 3);
	cout << "연산 결과 = " << n << endl;
	return 0;
}