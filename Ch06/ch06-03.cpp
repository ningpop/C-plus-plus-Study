#include <iostream>
#include <vector>

using namespace std;

class Rect {
	int w, h;
public:
	Rect() :w{ 0 }, h{ 0 }{}
	Rect(int w, int h) :w{ w }, h{ h }{}
	int area() { return w * h; }
	void print() {
		cout << "(" << w << "," << h << ")" << endl;
	}
};

int main()
{
	int num;
	int width, height;

	cout << "�簢���� ����: ";
	cin >> num;

	vector<Rect> vec(num);

	for (auto& e : vec)
	{
		cout << "�簢���� ��: ";
		cin >> width;
		cout << "�簢���� ����: ";
		cin >> height;

		e = Rect(width, height);
	}

	for (auto& e : vec)
	{
		if (e.area() > 100)
			e.print();
	}

	return 0;
}