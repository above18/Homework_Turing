#include<iostream>
using namespace std;
#include<windows.h>
double p = 3.14;
int main() 
{
	double r, s, c;
	cout << "������Բ�İ뾶��";
	cin >> r;
	s = p * r*r;
	c = 2 * p*r;
	cout << "Բ���ܳ�Ϊ��" << endl << c <<endl<< "Բ�����Ϊ��" << endl << s << endl;
	system("pause");
	return 0;
}