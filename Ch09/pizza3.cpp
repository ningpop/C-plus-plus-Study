#include <iostream>
using namespace std;

class Pizza {
    int radius;
Public:
    Pizza(int r = 0) : radius{ r }{}
    ~Pizza() { }
    void setRadius(int r) { radius = r; }
    void print() { cout << "Pizza(" << radius << ")" << endl; }
};

void upgrade(Pizza& pizza) {
    pizza.setRadius(20);
}

int main()
{
    Pizza obj(10);
    upgrade(obj);

    obj.print();
    return 0;
}