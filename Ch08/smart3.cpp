#include <iostream>
#include <memory>

using namespace std;

int main()
{
	unique_ptr<int[]> buf(new int[10]);

	for (int i = 0; i < 10; i++)
		buf[i] = i;

	for (int i = 0; i < 10; i++)
		cout << buf[i] << " ";
	cout << endl;

	return 0;
}