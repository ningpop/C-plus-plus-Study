#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int a, b, result;

	cout << "첫 번째 변: ";
	cin >> a;
	cout << "두 번째 변: ";
	cin >> b;

	result = sqrt(a * a + b * b);

	cout << "빗변 길이: " << result << endl;

	return 0;
}