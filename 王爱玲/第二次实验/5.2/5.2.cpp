#include<iostream>
using namespace std;
int main()
{
	const double PI = 3.14;
	double r;
	cin >> r;
	double l, s;
	l = 2 * PI*r;
	s = PI * r*r;
	cout << "�ܳ�=" << l << "���=" << s << endl;
	system("pause");
	return 0;
}