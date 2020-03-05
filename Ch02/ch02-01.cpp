#include <iostream>
#include <string>

using namespace std;

int main()
{
	string a, b;

	cout << "첫 번째 문자열: ";
	cin >> a;
	cout << "두 번째 문자열: ";
	cin >> b;

	if (a == b)
		cout << "2개의 문자열은 같습니다." << endl;
	else
		cout << "2개의 문자열은 다릅니다." << endl;

	return 0;
}