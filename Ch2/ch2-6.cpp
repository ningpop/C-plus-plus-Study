#include <iostream>

using namespace std;

int main()
{
	for (int i = 1; i <= 7; i++)
	{
		for (int j = 0; j < i; j++)
			cout << j + 1;
		for (int j = 0; j < 7 - i; j++)
			cout << "*";
		cout << endl;
	}

	return 0;
}