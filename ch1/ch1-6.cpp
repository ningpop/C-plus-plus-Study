#include <iostream>

using namespace std;

int main()
{
	int h, m, s;
	int result;

	cout << "��: ";
	cin >> h;
	cout << "��: ";
	cin >> m;
	cout << "��: ";
	cin >> s;

	result = h * 3600 + m * 60 + s;

	cout << "��ü ��: " << result << endl;

	return 0;
}