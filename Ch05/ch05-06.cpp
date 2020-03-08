#include <iostream>
#include <string>

using namespace std;

class SMS {
	int number;
	string sender;
	string receiver;
	string text;

public:
	SMS() {
		number = 0;
		sender = "";
		receiver = "";
		text = "";
	}
	SMS(int num = 0, string s = "", string r = "", string t = "") {
		number = num;
		sender = s;
		receiver = r;
		text = t;
	}

	string getSender() { return sender; }
	string getReceiver() { return receiver; }
	string getText() { return text; }
	void setSender(string s) { sender = s; }
	void setReceiver(string r) { receiver = r; }
	void setText(string t) { text = t; }

	void print() {
		cout << "���ڸ޽��� #" << number << endl;
		cout << "�߽���: " << sender << " ������: " << receiver << " ����: " << text << endl;
	}
};

int main()
{
	SMS sms1{ 1, "010-1234-5678", "010-1234-5679", "C++���δ� �ߵǰ�����?" };
	SMS sms2{ 2, "010-1234-5679", "010-1234-5678", "�� 5������� ���� ���׿�." };

	sms1.print();
	cout << endl;
	sms2.print();

	return 0;
}