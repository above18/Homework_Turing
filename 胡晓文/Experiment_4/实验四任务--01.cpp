#include<iostream>
#include<windows.h>
using namespace std;
int main() 
{

	//��������20��int��С���ڴ�ռ�
	int *p;
	p = new int[20];


	//ȷ��Ҫ����ĸ���
	cout << "������Ҫ����������ĸ�����" << endl;
	int n;
	cin >> n;
	if (n>20) 
	{
		cout << "������Ӧ����20��" << endl;
	}
	else 
	{


		//����������������
		cout << "������" << n << "������";
		int a;
		for (int i = 0; i < n; i++)
		{
			cin >> a;
			*(p+i) = a;
		}
	}



	//����������������ƽ����������
	int positive = 0, negative = 0;
	float sum = 0, variance = 0, aver = 0;
	for (int i = 0;i<n;i++) 
	{


		//��������
		if (*(p+i)>0) 
		{
			positive++;
		}


		//���㸺��
		else if (*(p+i)<0)
		{
			negative++;
		}
		float b = float(*(p + i));
		sum = sum + b;
	}

	//����ƽ����
	aver = sum / n;


	//���㷽��
	float v = 0;
	for (int i = 0; i < n;i++) 
	{
		float f = float(*(p + i));
		v = v + (f - aver)*(f - aver);
	}
	variance = v / n;



	cout << "�����ĸ���Ϊ��" << positive << "��" << endl;
	cout << "�����ĸ���Ϊ��" << negative << "��" << endl;
	cout << "ƽ����Ϊ��" << aver << endl;
	cout << "����Ϊ��" << variance << endl;



	//�������е����ݽ�������
	int l;
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (*(p+i)>*(p+j)) 
			{
				l = *(p + i);
				*(p + i) = *(p + j);
				*(p + j) = l;
			}
		}
	}
	cout << "�������С�����������Ϊ��" << endl;
	for (int i = 0; i < n;i++) 
	{
		cout << *(p + i) << "  " << endl;
	}
	delete []p;
	system("pause");
	return 0;
}