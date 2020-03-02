#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s, v, o;
	string result;

	cout << "주어: ";
	cin >> s;
	cout << "동사: ";
	cin >> v;
	cout << "목적어: ";
	cin >> o;

	result = s + " " + v + " a " + o;
	
	cout << result << endl;

	return 0;
}