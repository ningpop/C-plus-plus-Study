#include <iostream>
#include <string>

using namespace std;

int main()
{
	string input, max;
	max = "";
	for (int i = 0; i < 5; i++)
	{
		cout << "문자열을 입력하시오: ";
		cin >> input;

		if (input.size() > max.size())
			max = input;
	}

	cout << "제일 긴 문자열: " << max << endl;

	return 0;
}