#include<iostream>
#include<windows.h>
using namespace std;
void choiceSort(int p[],int num);
int main()
{
	int *p = new int[20];
	int num,a, b, c, d;
	a = b = c = d = 0;
	cout << "��������Ԫ�ظ���:" << endl;
	cin >> num;
	if (num > 20 || num < 1)
	{
		cout << "�������" << endl;
	}
	cout << "�����������Ԫ�ص�ֵ��" << endl;
	for (int i = 0; i < num; i++)
		cin >> p[i];
	for (int i = 0; i < num; i++)
	{
		if (p[i] > 0)
			a++;
		else
			b++;
	}
	cout << "���������ĸ���Ϊ" << a << endl;
	cout << "���и����ĸ���Ϊ" << b << endl;
	cout << "��С��������Ϊ��" << endl;
	choiceSort(p,num);
	for (int i = 0; i < num; i++)
		cout << "    " << p[i];
	cout << endl;
	int ave, var;
	int n = 0;
	int m = 0;
	for (int i = 0; i < num; i++)
		n = n + p[i];
	ave = n / num;
	cout << "����ľ�ֵΪ��" << ave << endl;
	for (int i = 0; i < num; i++)
		m = m+(ave - p[i])*(ave - p[i]);
	var = m / num;
	cout << "����ķ���Ϊ��" << var << endl;
	delete[]p;
	system("pause");
	return 0;
}
void choiceSort(int p[],int num)
{
	for (int i = 0; i < num; i++)
	{
		int m = i;
		for (int j = i + 1; j < num; j++)
		{
			//�����j��Ԫ�رȵ�m��Ԫ��С����j��ֵ��m   
			if (p[j] < p[m])
			{
				m = j;
			}
		}
		//����m��i����Ԫ�ص�λ��   
		if (i != m)
		{
			double t = p[i];
			p[i] = p[m];
			p[m] = t;
		}
	}
}
