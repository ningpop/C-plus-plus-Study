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

	cout << "å �̸�: " << book.title << endl;
	cout << "å ����: " << book.author << endl;

	return 0;
}