#include <iostream>
#include <string>

using namespace std;

int main()
{
	string phone;

	while(true)
	{
		cout << "��ȭ��ȣ�� �Է��Ͻÿ�: ";
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