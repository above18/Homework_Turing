#include<iostream>
using namespace std;

void sort(int a[], int n);
float var(float aver,int* p,int n);
int main()
{
	int *p;
	p = new int[20];           //���붯̬�ڴ�ռ�

	cout << "������20������ֵ��" << endl;
	for (int i = 0; i<20; i++)
	{
		cin >> p[i];
	}						  //�������ݵ�ֵ


	int count1 = 0, count2 = 0, sum = 0;
	for (int i = 0; i<20; i++)
	{
		if (p[i] != 0)
		{
			if (p[i]>0)
				count1++;   
			else count2++;   
		}

		sum += p[i];
	}

	cout << "����������Ϊ��" << count1 << endl;    //����������
	cout << "����������Ϊ��" << count2 << endl;    //����������

	float aver;
	aver = sum / 20;      
	cout << "ƽ����Ϊ��" << aver << endl;          //ƽ����
	
	cout << "����Ϊ��" << var(aver,p,20)<< endl << "�������������Ϊ��";//�󷽲�;

	sort(p, 20);
	for (int i = 0; i < 20; i++)
		cout << ' ' << p[i];
	cout << endl;

	delete[]p;									  //�ͷ��ڴ�ռ�
	system("pause");
	return 0;
}

void sort(int a[], int n)
{
	int i, j, k, t;
	for (i = 0; i<n - 1; i++)
	{
		k = i;
		for (j = i + 1; j<n; j++)
		{
			if (a[k]>a[j])
			{
				k = j;
			}
		}
		if (k != i)
		{
			t = a[i];
			a[i] = a[k];
			a[k] = t;
		}
	}
}

float var(float aver, int* p,int n)
{
	int t = 0;
	
	for (int i = 0; i<n; i++)
	{
		t += ((p[i] - aver)*(p[i] - aver));
	}
	return  (t / 20);
}
