#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int arr[4] = { 1,2,3,4 };
	int *a = arr;//��ʱaָ���һ��Ԫ�أ�ֵΪ1
	int *&p = a;//a��ֵ��Ϊ1
	p++;//��ʱa��ֵ��Ϊ2
	*p = 100;//a��ֵ��Ϊ100
	cout << *a << "  " << *p << endl;
	for (int i = 0; i<4; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
	int b = 10;
	p = &b;
	cout << *a << "  " << *p << endl;
	for (int i = 0; i < 4; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
	getchar();
	system("pause");
	return 0;
}
