#include <iostream>

using namespace std;

class Triangle {
	int b, h;
public:
	void setTriangle(int b = 0, int h = 0);
	inline double area();
	void print();
};

void Triangle::setTriangle(int b, int h)
{
	this->b = b;
	this->h = h;
}

inline double Triangle::area()
{
	return (b * h) / 2.0;
}

void Triangle::print()
{
	cout << "�غ��� " << b << "�̰� ���̰� " << h << "�� �ﰢ���� ����: " << area() << endl;
}

int main()
{
	Triangle t;

	t.setTriangle(3, 4);
	t.print();

	return 0;
}