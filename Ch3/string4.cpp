#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	cout << "주민등록번호를 입력하시오: ";
	cin >> s;

	cout << "-가 제거된 주민등록번호: ";
	for (auto& c : s)
	{
		if (c == '-') continue;
		cout << c;
	}
	cout << endl;

	return 0;
}