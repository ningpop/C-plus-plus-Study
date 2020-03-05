#include <iostream>
#include <string>

using namespace std;

class Book {
public:
	string title;
	string author;
};

int main()
{
	Book book;
	book.title = "Great C++";
	book.author = "Bob";

	cout << "책 이름: " << book.title << endl;
	cout << "책 저자: " << book.author << endl;

	return 0;
}