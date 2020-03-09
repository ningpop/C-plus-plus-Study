#include <iostream>
#include <ctime>

using namespace std;

class Circle {
	int radius;
public:
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return radius * radius * 3.14; }
};

int main()
{
	int num;
	int r;

	cout << "������ ���� ����: ";
	cin >> num;

	Circle *circle = new Circle[num];

	srand((unsigned int)time(NULL));

	for (int i = 0; i < num; i++) {
		r = rand() % 100 + 1;
		cout << "�� " << i + 1 << "�� ������ >> " << r << endl;
		circle[i].setRadius(r);
	}

	int count = 0;
	for (int i = 0; i < num; i++)
		if (circle[i].getArea() > 100.0)
			count++;

	cout << "������ 100���� ū ���� " << count << "�� �Դϴ�." << endl;

	delete[] circle;

	return 0;
}