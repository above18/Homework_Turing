#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main()
{
	int *ptr;
	int i, m = 0, n = 0;

	//��������ʮ��int��С���ڴ�ռ�
	ptr = new int[20];

	//��������Ԫ��
	cout << "�������ʮ����" << endl;
	for (i = 0; i<20; i++)
	{
		cin >> ptr[i];
	}

	//�ж�����������
	for (i = 0; i<20; i++)
	{
		if (ptr[i]>0)
			m++;
		else if (ptr[i]<0)
			n++;
		else if (ptr[i] == 0)
		{
			m = m;
			n = n;
		}
	}

	//�������������
	cout << "�����ĸ���Ϊ:" << m << endl;

	cout << "�����ĸ���Ϊ:" << n << endl;

	//�����ֵ
	float sum1 = 0;

	float average = 0.0;

	for (i = 0; i<20; i++)
	{
		sum1 = sum1 + ptr[i];
	}

	average = sum1 / 20.0;

	cout << "���ʮ�����ľ�ֵ:" << average << endl;

	//���㷽��
	float variation = 0;

	float sum2 = 0;

	for (i = 0; i<20; i++)
	{
		sum2 = sum2 + (ptr[i] - average)*(ptr[i] - average);
	}

	variation = sum2 / 20.0;

	cout << "���ʮ�����ķ���Ϊ��" << variation << endl;

	//�����㷨
	int temp = 0;

	for (i = 0; i<20; i++)
	{
		int i, j, t;
		for (i = 0; i < 19; i++)
			for (j = 0; j < 19 - i; j++)
				if (ptr[j] > ptr[j + 1])
				{
			t = ptr[j];
			ptr[j] = ptr[j + 1];
			ptr[j + 1] = t;
				}
	}

	cout << "���ʮ������С��������Ϊ��" << endl;

	for (i = 0; i<20; i++)
	{
		cout << ptr[i] << " ";
	}

	cout << endl;

	delete[]ptr;

	system("pause");

	return 0;

}
