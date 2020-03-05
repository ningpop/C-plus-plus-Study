#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1 = "Slow", s2 = "steady";
	string s3 = "the race.";
	string s4;

	s4 = s1 + " and " + s2 + " wins " + s3;
	cout << s4 << endl;

	return 0;
}