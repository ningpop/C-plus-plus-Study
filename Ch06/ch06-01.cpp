#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int size;
	int max, min;

	cout << "������ ����: ";
	cin >> size;

	vector<int> vec(size);

	for (auto& e : vec)
	{
		cout << "������ �Է��Ͻÿ�: ";
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

	cout << "�ִ밪: " << max << endl;
	cout << "�ּҰ�: " << min << endl;
	
	return 0;
}