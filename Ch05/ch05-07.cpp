#include <iostream>

using namespace std;

class Character {
	int x, y;
	double HP;
public:
	Character() {
		x = 0, y = 0;
		HP = 100;
	}
	Character(int x, int y, double hp) {
		this->x = x;
		this->y = y;
		HP = hp;
	}

	int getX() { return x; }
	int getY() { return y; }
	double getHP() { return HP; }
	void setX(int x) { this->x = x; }
	void setY(int y) { this->y = y; }
	void setHP(double hp) { this->HP = hp; }

	void print() {
		cout << "x: " << x << " y: " << y << " HP: " << HP << endl;
	}
};

int main()
{
	Character character;

	cout << "Ä³¸¯ÅÍ #1" << endl;
	for (int i = 0; i < 10; i++)
	{
		character.setX(i * 10);
		character.print();
	}

	return 0;
}