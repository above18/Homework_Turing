/*answer2_5_2.cpp ��C++���Ա�дһ������Բ�뾶�������������ܳ��ĳ���*/
#include<windows.h>
#include<iostream>
using namespace std;
const double PI = 3.14159;
int main()
{
	double r;
	cout << "������Բ�İ뾶��";
	cin >> r;
	double S, a;
	a = 2 * PI*r;
	S = PI * r*r;
	cout << "Բ�����Ϊ��" << S << endl << "Բ���ܳ�Ϊ��" << a << endl;



	system("pause");
	return 0;
}