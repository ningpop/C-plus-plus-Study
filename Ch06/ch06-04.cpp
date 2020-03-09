#include <iostream>
#include <string>
#include <vector>

using namespace std;

class SMS {
	string sender;
	string receiver;
	string text;

public:
	SMS() {
		sender = "";
		receiver = "";
		text = "";
	}
	SMS(string s, string r, string t) {
		sender = s;
		receiver = r;
		text = t;
	}

	void print() {
		cout << "�߽���: " << sender << " ������: " << receiver << " ����: " << text << endl;
	}
};

int main()
{
	SMS sms[3]{
		SMS("010-1234-5678", "010-1234-5679", "C++���δ� �ߵǰ�����?"),
		SMS("010-1234-5679", "010-1234-5678", "�� 5������� ���� ���׿�."),
		SMS("010-1234-5678", "010-1234-5679", "������ �ϼ���.")
	};

	for (auto& e : sms)
		e.print();

	cout << endl;

	vector<SMS> vec;

	vec.push_back(SMS("010-1234-5678", "010-1234-5679", "C++���δ� �ߵǰ�����?"));
	vec.push_back(SMS("010-1234-5679", "010-1234-5678", "�� 5������� ���� ���׿�."));
	vec.push_back(SMS("010-1234-5678", "010-1234-5679", "������ �ϼ���."));

	for (auto& e : vec)
		e.print();

	return 0;
}