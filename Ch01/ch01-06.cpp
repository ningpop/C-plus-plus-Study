#include <iostream>

using namespace std;

int main()
{
	int h, m, s;
	int result;

	cout << "시: ";
	cin >> h;
	cout << "분: ";
	cin >> m;
	cout << "초: ";
	cin >> s;

	result = h * 3600 + m * 60 + s;

	cout << "전체 초: " << result << endl;

	return 0;
}