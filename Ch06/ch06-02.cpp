#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool compare(string& a, string& b) {
	return a < b;
}

int main()
{
	int size;

	cout << "���ڿ��� ����: ";
	cin >> size;

	vector<string> vec(size);

	for (auto& e : vec)
	{
		cout << "���ڿ��� �Է��Ͻÿ�: ";
		cin >> e;
	}

	sort(vec.begin(), vec.end(), compare);

	for (auto& e : vec)
		cout << e << endl;

	return 0;
}