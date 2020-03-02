#include <iostream>

using namespace std;

int main()
{
	int i = 0;
	do {
		i++;
		cout << "continue 문장 전에 있는 문장" << endl;
		continue;
		cout << "continue 문장 후에 있는 문장" << endl;
	} while (i < 3);

	return 0;
}