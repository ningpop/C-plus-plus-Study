#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s, v, o;
	string result;

	cout << "�־�: ";
	cin >> s;
	cout << "����: ";
	cin >> v;
	cout << "������: ";
	cin >> o;

	result = s + " " + v + " a " + o;
	
	cout << result << endl;

	return 0;
}