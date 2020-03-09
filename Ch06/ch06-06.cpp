#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Contact {
	string name;
	string tel;

public:
	Contact() :name{ "" }, tel{ "" }{}
	Contact(string n, string t) :name{ n }, tel{ t }{}

	string getName() { return name; }
	string getTel() { return tel; }

	void print() {
		cout << "전화번호 : " << tel << endl;
	}
};

int main()
{
	string name;
	string tel;

	vector<Contact> vec(3);

	for (auto& e : vec) {
		cout << "이름을 입력하시오 : ";
		cin >> name;
		cout << "전화번호를 입력하시오 : ";
		cin >> tel;

		e = Contact(name, tel);
	}

	cout << "탐색하고 싶은 이름을 입력하시오 : ";
	cin >> name;

	for (auto& e : vec) {
		if (e.getName() == name)
			e.print();
	}

	return 0;
}