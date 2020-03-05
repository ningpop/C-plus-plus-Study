#include <iostream>

using namespace std;

int main()
{
	int list[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (int& i : list)
		i = i * i;

	for (int i : list)
		cout << i << " ";

	return 0;
}