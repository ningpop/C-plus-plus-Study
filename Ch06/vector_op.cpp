#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v1{ 1, 2, 3, 4, 5 };
	vector<int> v2(v1);

	if (v1 == v2)
		cout << "2개의 벡터가 일치합니다." << endl;

	return 0;
}