#include <iostream>
#include <string>

using namespace std;

int main()
{
	string input, max;
	max = "";
	for (int i = 0; i < 5; i++)
	{
		cout << "���ڿ��� �Է��Ͻÿ�: ";
		cin >> input;

		if (input.size() > max.size())
			max = input;
	}

	cout << "���� �� ���ڿ�: " << max << endl;

	return 0;
}