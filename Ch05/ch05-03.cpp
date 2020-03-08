#include <iostream>

using namespace std;

class Box {
	int number;
	int length;
	int width;
	int height;
	int volume;
	bool empty;
public:
	Box() {
		number = 0;
		length = 0;
		width = 0;
		height = 0;
		volume = length * width * height;
		empty = true;
	}
	Box(int n = 0, int l = 0, int w = 0, int h = 0) {
		number = n;
		length = l;
		width = w;
		height = h;
		volume = length * width * height;
		empty = true;
	}

	int getLength() { return length; }
	int getWidth() { return width; }
	int getHeight() { return height; }
	int getVolume() { return volume; }
	bool getEmpty() { return empty; }

	void setLength(int l) { length = l; }
	void setWidth(int w) { width = w; }
	void setHeight(int h) { height = h; }
	
	void boxing() {
		if (empty == true)
			empty = false;
		else
			empty = true;
	}

	void print() {
		cout << "상자 #" << number << endl;
		cout << "상자의 길이: " << length << endl;
		cout << "상자의 너비: " << width << endl;
		cout << "상자의 높이: " << height << endl;
		cout << "상자의 부피: " << volume << endl;
	}
};

int main()
{
	Box box1{ 1 };
	box1.print();

	cout << endl;

	Box box2{ 2, 3, 2, 4 };
	box2.print();

	return 0;
}