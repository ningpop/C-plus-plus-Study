#include <iostream>

using namespace std;

class Circle {
private:
	int radius;

public:
	Circle():radius(10){}
	~Circle() {}
	void setRadius(int radius) { this->radius = radius; }
	int getRadius() const { return radius; }
};

int main()
{
	Circle* p = new Circle();
	const Circle *pConstObj = new Circle();
	Circle *const pConstPtr = new Circle();

	cout << "pRect->radius: " << p->getRadius() << endl;
	cout << "pConstObj->radius: " << pConstObj->getRadius() << endl;
	cout << "pConstPtr->radius: " << pConstPtr->getRadius() << endl << endl;

	p->setRadius(30);
	// pConstObj->setRadius(30);
	pConstPtr->setRadius(30);

	cout << "pRect->radius: " << p->getRadius() << endl;
	cout << "pConstObj->radius: " << pConstObj->getRadius() << endl;
	cout << "pConstPtr->radius: " << pConstPtr->getRadius() << endl;

	return 0;
}