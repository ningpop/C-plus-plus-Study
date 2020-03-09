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

	cout << "생성할 원의 개수: ";
	cin >> num;

	Circle *circle = new Circle[num];

	srand((unsigned int)time(NULL));

	for (int i = 0; i < num; i++) {
		r = rand() % 100 + 1;
		cout << "원 " << i + 1 << "의 반지름 >> " << r << endl;
		circle[i].setRadius(r);
	}

	int count = 0;
	for (int i = 0; i < num; i++)
		if (circle[i].getArea() > 100.0)
			count++;

	cout << "면적이 100보다 큰 원은 " << count << "개 입니다." << endl;

	delete[] circle;

	return 0;
}