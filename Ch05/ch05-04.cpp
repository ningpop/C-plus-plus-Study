#include <iostream>
#include <string>

using namespace std;

class Movie {
	int number;
	string title;
	string director;
	double rating;

public:
	Movie() {
		number = 0;
		title = "";
		director = "";
		rating = 0.0;
	}
	Movie(int n = 0, string t = "", string d = "", double r = 0.0) {
		number = n;
		title = t;
		director = d;
		rating = r;
	}

	string getTitle() { return title; }
	string getDirector() { return director; }
	double getRating() { return rating; }

	void setTitle(string t) { title = t; }
	void setDirector(string d) { director = d; }
	void setRating(double r) { rating = r; }

	void print() {
		cout << "��ȭ #" << number << endl;
		cout << "��ȭ ����: " << title << endl;
		cout << "��ȭ ����: " << director << endl;
		cout << "��ȭ ����: " << rating << endl;
	}
};

int main()
{
	Movie movie1{ 1, "Ÿ��Ÿ��", "���ӽ� ī�޷�", 9.5 };
	movie1.print();

	cout << endl;

	Movie movie2{ 2, "��������", "�� ����", 8.34 };
	movie2.print();

	return 0;
}