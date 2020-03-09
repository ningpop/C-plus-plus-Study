#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int size;
	int max, min;

	cout << "정수의 개수: ";
	cin >> size;

	vector<int> vec(size);

	for (auto& e : vec)
	{
		cout << "정수를 입력하시오: ";
		cin >> e;
	}

	max = min = vec.front();

	for (auto& e : vec)
	{
		if (max < e)
			max = e;
		if (min > e)
			min = e;
	}

	cout << "최대값: " << max << endl;
	cout << "최소값: " << min << endl;
	
	return 0;
}