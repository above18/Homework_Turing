/*
 *2018��10��18��  �������ʵ��4
 *��һ��
 */

#include<stdio.h>
#include<iostream>
#include<cmath>

using namespace std;
const int N = 20;

//ͳ����������������ֵ������
int countNumber(int *p)
{
	int posi = 0, nega = 0, sum = 0, ave = 0;
	for (int i = 0; i < N; i++)
	{
		if (p[i] < 0)nega++;
		if (p[i] > 0)posi++;
		sum += p[i];
	}
	ave = sum / N;
	cout << "������" << posi << "��" << endl << "������" << nega << "��" << endl << "��ֵΪ" << ave << endl;
	
	double var=0;
	for (int i = 0; i < N; i++)
	{
		var+=pow((p[i] - ave), 2);
	}
	cout << "����Ϊ" << var / N << endl;

	return 1;
}


//ֱ�Ӳ�������
void StraightInsertionSort(int *p)
{
	int t = 0;
	int i, j;
	for (i = 1; i < N; i++)//i��ʾ���������������N-1�β���
	{
		t = p[i];
		if (p[i] < p[i - 1])//�����<ǰ
		{
			j = i - 1;
			while ((j >= 0) && (t < p[j]))
			{
				p[j + 1] = p[j];
				j--;
			}
			p[j + 1] = t;
		}
		else//�����>=ǰ
		{
			i++;
		}	
	}
}
int main()
{
	int *p = new int[N];
	cout << "������" << N << "������:" << endl;

	for (int i = 0; i < N; i++)
	{
		cin >> p[i];
	}
	
	countNumber(p);//ͳ����������������ֵ������
	StraightInsertionSort(p);//��������

	cout << "�����������" << N << "������Ϊ" << endl;
	for (int i = 0; i < N; i++)
	{
		cout << p[i] << " ";
	}

	delete p;
	cout << endl << "�ڴ�ռ����ͷ�" << endl;

	return 0;
}