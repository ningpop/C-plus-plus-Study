#include <iostream>

using namespace std;

int main()
{
	int l, w, h;
	int volume, superficial;

	cout << "길이: ";
	cin >> l;
	cout << "너비: ";
	cin >> w;
	cout << "높이: ";
	cin >> h;

	volume = l * w * h;
	superficial = 2 * ((l*w) + (l*h) + (h*w));

	cout << "상자의 부피: " << volume << endl;
	cout << "상자의 표면적: " << superficial << endl;

	return 0;
}