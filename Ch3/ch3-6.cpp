#include <iostream>
#include <string>

using namespace std;

int main()
{
	string phone;

	while(true)
	{
		cout << "전화번호를 입력하시오: ";
		cin >> phone;

		if (phone == "quit")
			break;

		for (auto& c : phone)
		{
			if ((c=='(') || (c == ')'))
				continue;
			cout << c;
		}
		cout << endl;
	}

	return 0;
}