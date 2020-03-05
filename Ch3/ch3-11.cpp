#include <iostream>
#include <string>

using namespace std;

int main()
{
	string input;
	int end_index;

	cout << "문자열을 입력하시오: ";
	getline(cin, input);
	end_index = input.size() - 1;

	if ((97 < input[0]) && (input[end_index] < 122))
		input[0] = toupper(input[0]);

	if (input[end_index] != '.')
		input += '.';

	cout << "결과 문자열: " << input << endl;

	return 0;
}