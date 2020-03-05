#include <iostream>
#include <string>
#include <algorithm>
#include <ctime>

using namespace std;

int main()
{
	string str, result = "apple", guess;
	int index1, index2;

	srand((unsigned int)time(NULL));

	str = result;

	for (int i = 0; i < str.size(); i++)
	{
		index1 = rand() % 5;
		index2 = rand() % 5;

		swap(str[index1], str[index2]);
	}

	while (true)
	{
		cout << str << "은 어떤 단어가 스크램블된 것일까요? ";
		cin >> guess;

		if (result == guess)
		{
			cout << "축하합니다." << endl;
			break;
		}
	}

	return 0;
}