#include <iostream>
#include <string>
 
using namespace std;

bool in_Upper(string str)
{
	for (auto& c : str)
		if (isupper(c))
			return true;
	return false;
}

bool in_Lower(string str)
{
	for (auto& c : str)
		if (islower(c))
			return true;
	return false;
}

bool in_Number(string str)
{
	for (auto& c : str)
		if (48 <= c && c <= 57)
			return true;
	return false;
}

int main()
{
	string pw;

	cout << "암호를 입력하시오: ";
	cin >> pw;

	if (in_Upper(pw) && in_Lower(pw) && in_Number(pw))
		cout << "안전합니다." << endl;
	else
		cout << "안전하지 않습니다." << endl;

	return 0;
}