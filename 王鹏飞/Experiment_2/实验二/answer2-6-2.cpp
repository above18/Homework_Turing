#include<iostream>
#include<windows.h>
#include<math.h>
using namespace std;
double area(int x)
{
	double y;
	y = 3.14*x*x;
	return y;
}
double length(int x)
{
	double y;
	y = 2 * 3.24*x;
	return y;
}
int main()
{
	double s, c;
	int r;
	cout<<"please enter r:" << endl;
	cin >> r;
	s = area(r);
	c = length(r);
	cout<< "���Ϊ��" << s << "�ܳ��ǣ�" << c;
	system("pause");
	return 0;
}