#include <iostream>
#include <string>

using namespace std;

int main()
{
	string list[] = { "ö��", "����", "�浿" };

	for (auto& x : list)
		cout << (x + "�� �ȳ�!") << endl;

	return 0;
}