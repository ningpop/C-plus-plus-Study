#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s = "When in Rome, do as the Romans.";

	int index = s.find("Rome");
	cout << index << endl;

	return 0;
}