#include <iostream>

using namespace std;

bool prime(int num)
{
	for (int i = 2; i < num; i++)
	{
		if (num%i == 0)
			return false;
	}
	return true;
}

int main()
{
	for (int i = 2; i <= 100; i++)
	{
		if (prime(i))
			cout << i << " ";
	}

	return 0;
}