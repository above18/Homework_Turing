//��Բ�ܳ������
#include<Windows.h>
#include<iostream>
using namespace std;
const double PI = 3.1415926;//һ����Ҫ���Ǽӷֺţ�����
int main()
{
	double r, s, c;
	cout << "������뾶"<<endl;
	cin >> r;
	s = PI * r*r;
	c = 2 * PI*r;
	cout << "�ܳ���" << c << " �����" << s << endl;
	system("pause");
	return 0;
}