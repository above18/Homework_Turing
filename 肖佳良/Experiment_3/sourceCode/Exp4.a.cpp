#include<iostream>
#include<Windows.h>
#include<math.h>

using namespace std;

void sort(int *a,int b);
int main()
{
	int *a = new int[20];
	int i = 0,avg=0,dev=0;

	cout << "�������������" << endl;

	for (i = 0; i < 20; i++)
	{
		srand(GetTickCount());
		Sleep(rand()/50);
		a[i] = rand()-10000;
	}

	cout << "������������" << endl;

	int positiive = 0, negative = 0;

	for (i = 0; i < 20; i++)
	{
		if (a[i] < 0)negative++;
		else if (a[i]>0)positiive++;
	}
	cout << "������" << positiive << "��  ������" << negative << "��" << endl;
	
	for (i = 0; i < 20; i++)
	{
		avg += a[i];
	}
	avg /= 20;

	cout << "ƽ����Ϊ" << avg << endl;

	for (i = 0; i < 20; i++)
	{
		dev += (a[i]-avg)*(a[i] - avg);
	}
	dev /= 20;
	dev = sqrt(dev);

	cout << "��׼��Ϊ" << dev << endl;

	sort(a, 20);

	cout << "������" << endl;
	for (i = 0; i < 20; i++)
		cout << a[i] << endl;

	delete [20]a;

	system("pause");
	return 0;
}

void sort(int*a,int b)
{
	for (int i = 0; i < b; i++)
	{
		int x = i,swap=0;
		for (int j = i + 1; j < b; j++)
		if (a[j] < a[x])x = j;
		if (x != i)
		{
			swap = a[i];
			a[i] = a[x];
			a[x] = swap;
		}
	}
}