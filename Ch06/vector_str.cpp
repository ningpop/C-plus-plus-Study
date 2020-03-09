#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<string> vec;

	vec.push_back("MILK");
	vec.push_back("BREAD");
	vec.push_back("BUTTER");

	for (auto e : vec)
		cout << " " << e;
	cout << endl;

	return 0;
}