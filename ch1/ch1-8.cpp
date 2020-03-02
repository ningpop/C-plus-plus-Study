#include <iostream>

using namespace std;

int main()
{
	int quiz1, quiz2, quiz3, mid, fin, total;

	cout << "퀴즈  #1 성적: ";
	cin >> quiz1;
	cout << "퀴즈  #2 성적: ";
	cin >> quiz2;
	cout << "퀴즈  #3 성적: ";
	cin >> quiz3;
	cout << "중간고사 성적: ";
	cin >> mid;
	cout << "기말고사 성적: ";
	cin >> fin;

	total = quiz1 + quiz2 + quiz3 + mid + fin;

	cout << "==========================" << endl;
	cout << "성적 총합: " << total << endl;
	cout << "==========================" << endl;

	return 0;
}