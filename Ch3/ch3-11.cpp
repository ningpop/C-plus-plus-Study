#include <iostream>
#include <string>

using namespace std;

int main()
{
	string input;
	int end_index;

	cout << "���ڿ��� �Է��Ͻÿ�: ";
	getline(cin, input);
	end_index = input.size() - 1;

	if ((97 < input[0]) && (input[end_index] < 122))
		input[0] = toupper(input[0]);

	if (input[end_index] != '.')
		input += '.';

	cout << "��� ���ڿ�: " << input << endl;

	return 0;
}