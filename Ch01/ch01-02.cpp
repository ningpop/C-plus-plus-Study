#include <iostream>
#include <string>

using namespace std;

int main()
{
	int age;

	cout << "나이: ";
	cin >> age;

	cout << "10년 후에는 " << to_string(age + 10) << "살이 됩니다." << endl;

	return 0;
}