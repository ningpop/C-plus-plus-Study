#include <iostream>

using namespace std;

int main()
{
	int l, w, h;
	int volume, superficial;

	cout << "����: ";
	cin >> l;
	cout << "�ʺ�: ";
	cin >> w;
	cout << "����: ";
	cin >> h;

	volume = l * w * h;
	superficial = 2 * ((l*w) + (l*h) + (h*w));

	cout << "������ ����: " << volume << endl;
	cout << "������ ǥ����: " << superficial << endl;

	return 0;
}