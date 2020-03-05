#include <iostream>
#include <string>

using namespace std;

int main()
{
	string list[] = { "Ã¶¼ö", "¿µÈñ", "±æµ¿" };

	for (auto& x : list)
		cout << (x + "¾ß ¾È³ç!") << endl;

	return 0;
}