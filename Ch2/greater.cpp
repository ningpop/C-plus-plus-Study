#include <iostream>

using namespace std;

int main()
{
	int x, y;

	cout << "x���� �Է��Ͻÿ�: ";
	cin >> x;

	cout << "y�r�� �Է��Ͻÿ�: ";
	cin >> y;

	if (x > y)
		cout << "x�� y���� Ů�ϴ�." << endl;
	else
		cout << "y�� x���� Ů�ϴ�." << endl;

	return 0;
}