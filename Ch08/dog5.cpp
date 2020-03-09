#include <iostream>
#include <memory>

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
	std::unique_ptr<Dog> pDog(new Dog);
	cout << "강아지의 나이: " << pDog->getAge() << endl;

	pDog->setAge(5);
	cout << "강아지의 나이: " << pDog->getAge() << endl;

	return 0;
}