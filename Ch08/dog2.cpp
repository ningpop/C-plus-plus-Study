#include <iostream>

using namespace std;

class Dog {
private:
	string name;
	int age;

public:
	Dog() {
		age = 1;
		name = "�ٵ���";
	}
	~Dog(){ }
	int getAge() { return age; }
	void setAge(int dog_age) { age = dog_age; }
};

int main()
{
	Dog * pDog = new Dog;
	cout << "�������� ����: " << pDog->getAge() << endl;

	pDog->setAge(5);
	cout << "�������� ����: " << pDog->getAge() << endl;

	delete pDog;

	return 0;
}