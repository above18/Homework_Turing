#include<iostream>
using namespace std;
float average_(int *a )      //����ƽ����
{
	float sum=0;
	for (int i=0;i<20;i++)
	{
		sum += a[i];
	}
	return sum / 20;
}
int main()
{
	int *a;
	int zheng=0, fu=0;
	a = new int[20];
	cout << "���������������ĵ�����20��������" << endl;
	for (int i = 0;i < 20 ; i++)
	{
		cin >> a[i];
	}
	for (int i=0;i<20;i++)
	{
		if (a[i]<0)
		{
			fu++;
		}
		if (a[i]>0)
		{
			zheng++;
		}
	}
	cout << "�����ĸ���Ϊ��" << zheng << endl;
	cout << "�����ĸ���Ϊ��" <<fu <<endl;
	for (int i=0;i<19;i++)      //����
	{
		for (int j=i+1;j<20;j++)
		{
			if (a[i]>a[j])
			{
				int b;
				b = a[i];
				a[i] = a[j];
				a[j] = b;
			}
			
		}
	}
	float ave = average_(a);
	float fangcha,sum=0;
	for (int i=0;i<20;i++)   //���㷽��
	{
		sum += pow(a[i] - ave, 2);
	}
	fangcha = sqrt(sum / 20.0);
	cout << "ƽ��ֵΪ��" << ave <<endl;
	cout << "��׼����Ϊ��" <<fangcha << endl;
	for (int i = 0; i < 20; i++)   //���
	{
		cout << a[i]<<" ";
	}
	cout << endl;
	delete []a;
	system("pause");
	return 0;
}