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
	cout << "�ƹ��� �μ��� ���޵��� ���� ���:\n";
	display();

	cout << "\nù ��° �μ��� ���޵Ǵ� ���:\n";
	display('#');

	cout << "\n��� �μ��� ���޵Ǵ� ���:\n";
	display('#', 5);

	return 0;
}