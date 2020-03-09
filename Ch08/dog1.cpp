#include <iostream>

using namespace std;

class Dog {
private:
	string name;
	int age;

public:
	Dog() {
		cout << "생성자 호출\n";
		age = 1;
		name = "바둑이";
	}
	~Dog() {
		cout << "소멸자 호출\n";
	}
};

int main()
{
	Dog * pDog = new Dog;
	delete pDog;

	return 0;
}