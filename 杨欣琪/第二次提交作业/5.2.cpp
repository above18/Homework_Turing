#include<iostream>
#include<windows.h>
using namespace std;
const float  p = 3.141592653;
int main()
{
	float r, pe, area;
	cout << "������Բ�İ뾶"  << endl;
	cin >> r;
	pe = 2 * p*r;
	area = p * r*r;
	cout << "Բ���ܳ�Ϊ" << pe << endl;
	cout << "Բ�����Ϊ" << area << endl;
	system("pause");
	return 0;


}