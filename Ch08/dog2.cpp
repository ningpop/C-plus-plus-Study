#include <iostream>

using namespace std;

class Dog {
private:
	string name;
	int age;

public:
	Dog() {
		age = 1;
		name = "바둑이";
	}
	~Dog(){ }
	int getAge() { return age; }
	void setAge(int dog_age) { age = dog_age; }
};

int main()
{
	Dog * pDog = new Dog;
	cout << "강아지의 나이: " << pDog->getAge() << endl;

	pDog->setAge(5);
	cout << "강아지의 나이: " << pDog->getAge() << endl;

	delete pDog;

	return 0;
}