#include <iostream>

using namespace std;

int main()
{
	long fact = 1;
	int n;

	cout << "������ �Է��Ͻÿ�: ";
	cin >> n;

	for (int i = 1; i <= n; i++)
		fact = fact * i;

	cout << n << "!�� " << fact << " �Դϴ�.\n";

	return 0;
}