#include <iostream>

using namespace std;

int main()
{
	int n, result = 0;

	cout << "n���� �Է��Ͻÿ�: ";
	cin >> n;

	for (int i = 1; i <= n; i++)
		result += i * i;

	cout << "��갪�� " << result << "�Դϴ�." << endl;

	return 0;
}