#include <iostream>

using namespace std;

void f(int i) {
	cout << "f(int)" << endl;
}

void f(char *p) {
	cout << "f(char *)" << endl;
}

int main()
{
	f(NULL);
	f(nullptr);

	return 0;
}