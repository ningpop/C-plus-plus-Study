#include <iostream>

using namespace std;

int main()
{
	int number = 10;

	int *p = &number;

	cout << *p << endl;

	return 0;
}