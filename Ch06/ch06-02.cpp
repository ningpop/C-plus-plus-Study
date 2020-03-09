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

	cout << "문자열의 개수: ";
	cin >> size;

	vector<string> vec(size);

	for (auto& e : vec)
	{
		cout << "문자열을 입력하시오: ";
		cin >> e;
	}

	sort(vec.begin(), vec.end(), compare);

	for (auto& e : vec)
		cout << e << endl;

	return 0;
}