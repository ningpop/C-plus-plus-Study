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
		cout << "발신자: " << sender << " 수신자: " << receiver << " 내용: " << text << endl;
	}
};

int main()
{
	SMS sms[3]{
		SMS("010-1234-5678", "010-1234-5679", "C++공부는 잘되가나요?"),
		SMS("010-1234-5679", "010-1234-5678", "네 5장까지는 문제 없네요."),
		SMS("010-1234-5678", "010-1234-5679", "열심히 하세요.")
	};

	for (auto& e : sms)
		e.print();

	cout << endl;

	vector<SMS> vec;

	vec.push_back(SMS("010-1234-5678", "010-1234-5679", "C++공부는 잘되가나요?"));
	vec.push_back(SMS("010-1234-5679", "010-1234-5678", "네 5장까지는 문제 없네요."));
	vec.push_back(SMS("010-1234-5678", "010-1234-5679", "열심히 하세요."));

	for (auto& e : vec)
		e.print();

	return 0;
}