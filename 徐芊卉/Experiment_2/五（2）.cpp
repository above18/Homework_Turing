#include<iostream>
using namespace std;
int main()
{
	const double PI = 3.1415926;
	double r, s, c;
	cout << "��Բ�뾶Ϊ:";
	cin >> r;
	cout << endl;
	s = PI * r*r;
	cout << "��Բ���Ϊ��" << s;
	cout << endl;
	cout << "��Բ�ܳ�Ϊ��";
	c = 2 * PI*r;
	cout << c;
	system("pause");
	return 0;
}