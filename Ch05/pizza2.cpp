#include <iostream>

using namespace std;

class Pizza {
public:
	Pizza(int s) : size(s) {}
	int size;
};

void makeDouble(Pizza& p)
{
	p.size *= 2;
}

int main()
{
	Pizza pizza(10);
	makeDouble(pizza);
	cout << pizza.size << "��ġ ����" << endl;

	return 0;
}