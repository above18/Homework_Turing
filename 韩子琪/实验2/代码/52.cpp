#include<iostream>
#include<windows.h>
#define Pi 3.14
using namespace std;
int main()
{
	double S, C;
	int r;
	cout << "������Բ�İ뾶��" << endl;
	cin >> r;
	S = Pi * r*r;
	C = 2 * Pi*r;
	cout << "Բ������ǣ�S=" << S << endl;
	cout << "Բ���ܳ��ǣ�C=" << C << endl;
	system("pause");
	return 0;
}