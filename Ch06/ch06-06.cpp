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
		cout << "��ȭ��ȣ : " << tel << endl;
	}
};

int main()
{
	string name;
	string tel;

	vector<Contact> vec(3);

	for (auto& e : vec) {
		cout << "�̸��� �Է��Ͻÿ� : ";
		cin >> name;
		cout << "��ȭ��ȣ�� �Է��Ͻÿ� : ";
		cin >> tel;

		e = Contact(name, tel);
	}

	cout << "Ž���ϰ� ���� �̸��� �Է��Ͻÿ� : ";
	cin >> name;

	for (auto& e : vec) {
		if (e.getName() == name)
			e.print();
	}

	return 0;
}