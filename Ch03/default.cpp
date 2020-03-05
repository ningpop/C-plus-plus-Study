#include <iostream>

using namespace std;

void display(char c = '*', int n = 10)
{
	for (int i = 0; i < n; i++)
		cout << c;
	cout << endl;
}

int main()
{
	cout << "아무런 인수가 전달되지 않은 경우:\n";
	display();

	cout << "\n첫 번째 인수만 전달되는 경우:\n";
	display('#');

	cout << "\n모든 인수가 전달되는 경우:\n";
	display('#', 5);

	return 0;
}