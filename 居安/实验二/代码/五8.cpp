
#include<Windows.h>
#include<iostream>
using namespace std;
const double pi = 3.1415926;
int main()
{
	double r, s, c;
	cout << "������Բ�İ뾶"<<endl;
	cin >> r;
	s = pi * r*r;
	c = 2 * pi*r;
	cout << "Բ���ܳ���" << c << " �����" << s << endl;
	system("pause");
	return 0;
}
