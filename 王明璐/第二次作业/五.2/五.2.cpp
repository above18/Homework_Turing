//��C++���Ա�дһ������Բ�뾶�������������ܳ��ĳ���

//�������£�

#include <iostream>
#include <windows.h>

using namespace std;

#define pi 3.14 

double Area(int r);
double Perimeter(int r);

int main()
{
	int r;
	cout << "������Բ�İ뾶��";
	cin >> r;
	cout << "Բ�����Ϊ��" << Area(r) << endl;
	cout << "Բ���ܳ�Ϊ��" << Perimeter(r) << endl;
	system("pause");
	return 0;
}

double Area(int r)
{
	return pi * r*r;
}

double Perimeter(int r)
{
	return 2 * pi*r;
}