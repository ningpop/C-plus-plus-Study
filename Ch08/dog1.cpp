#include <iostream>

using namespace std;

class Dog {
private:
	string name;
	int age;

public:
	Dog() {
		cout << "������ ȣ��\n";
		age = 1;
		name = "�ٵ���";
	}
	~Dog() {
		cout << "�Ҹ��� ȣ��\n";
	}
};

int main()
{
	Dog * pDog = new Dog;
	delete pDog;

	return 0;
}