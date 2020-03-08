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
		cout << "문자메시지 #" << number << endl;
		cout << "발신자: " << sender << " 수신자: " << receiver << " 내용: " << text << endl;
	}
};

int main()
{
	SMS sms1{ 1, "010-1234-5678", "010-1234-5679", "C++공부는 잘되가나요?" };
	SMS sms2{ 2, "010-1234-5679", "010-1234-5678", "네 5장까지는 문제 없네요." };

	sms1.print();
	cout << endl;
	sms2.print();

	return 0;
}