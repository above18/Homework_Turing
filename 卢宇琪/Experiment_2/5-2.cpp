#include <iostream>
#include <windows.h>
using namespace std;
int area(double r,double s)//���
{
	s=3.14*(r*r);
	return s;
	
}
int per(double r,double c)//�ܳ�
{
	c=6.28*r;
	return c;
}
int mian()
{
	int r, double a, double b, double s, double c;
	cin >> r;
	a = area(r,s);
	b = per(r,c);
	cout << c << '\t' << s << '\n';
	system("pause");
	return 0;
}