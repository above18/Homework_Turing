#include<iostream>
using namespace std;
#include<math.h>
#define M_PI        3.14159265358979323846

double circlelength(int a)
{
	return (M_PI * 2*a);
}
int main()
{
	double a;
	cout << "������Բ�İ뾶:\n" << endl;
	cin >> a;
	cout << "Բ���ܳ�Ϊ:" << circlelength(a) << endl;
	system("pause");
	return 0;
}