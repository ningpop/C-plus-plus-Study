#include <iostream>

using namespace std;

int main()
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			cout << "¹Ú¼ö ";
		else
			cout << i << " ";
	}

	return 0;
}