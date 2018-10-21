#include<iostream>
#include<Windows.h>
using namespace std;

int main()
{
	int *p;    // ����ָ�������ָ��
	int positiveNum = 0, negativeNum = 0;    // �����¼�������������ı���
	p = new int[20];
	
	// forѭ������
	cout << "���������ݣ�" << endl;
	for (int i = 0; i < 20; i++)
	{
		cin >> p[i];
		if (p[i] < 0)
		{
			negativeNum++;
		}
		else if (p[i] > 0)
		{
			positiveNum++;
		}
		else
			continue;
	}

	cout << "�����ĸ���Ϊ��" << positiveNum << " " << "�����ĸ���Ϊ��" << negativeNum << " " << endl;

	// ��������
	double means(int *p, int num);
	double variance(int *p, int num);
	void sort(int *p, int num);
	void output(int *p, int num);

	// �����ֵ�ͷ���
	cout << "��ֵΪ��" << means(p, 20) << endl;
	cout << "����Ϊ��" << variance(p, 20) << endl;

	// ��С��������
	sort(p, 20);
	cout << "��С��������" << endl;

	// �������
	output(p, 20);
	delete []p;
	system("pause");
	return 0;
}

double means(int *p, int num)
{
	double sum = 0;
	for (int i = 0; i < num; i++)
	{
		sum += p[i];
	}
	return sum / num;
}

double variance(int *p, int num)
{
	double means(int *p, int num);
	double sumSquare = 0;
	double average = 0;
	
	average = means(p, num);
	for (int i = 0; i < num; i++)
	{
		sumSquare += (p[i] - average)*(p[i] - average);
	}
	return sumSquare / num;
}

void sort(int *p, int num)
{
	for (int i = 0; i < num - 1; i++)
	{
		for (int j = 0; j < num - i - 1; j++)
		{
			if (p[j] > p[j + 1])
			{
				int t;
				t = p[j];
				p[j] = p[j + 1];
				p[j + 1] = t;
			}
		}
	}
}

void output(int *p, int num)
{
	for (int i = 0; i < num; i ++ )
	{
		cout << p[i] << " ";
	}
	cout << endl;
}