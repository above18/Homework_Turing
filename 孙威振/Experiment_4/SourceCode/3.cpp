#include<iostream>
#include<windows.h>
#include<math.h>
using namespace std;

int main()
{
	int i, j, temp,a = 0, b = 0, c = 0, d = 0, sum1 = 0, sum2 = 0;
	int *p;
	p = new int[20];
	cout << "���������飺" << endl;

	for (i = 0; i < 20; i++)
	{	
		cin >> p[i];
		if (p[i] > 0)
			a++;
		else if (p[i] < 0)
			b++;
		sum1 = sum1 + p[i];
	}

	c = sum1 / 20;

	for (i = 0; i < 20; i++)
	{
		sum2 = sum2 + pow((p[i] - sum1), 2);
	}

	d = sum2 / 20;

	cout << "�����ĸ���Ϊ" << a << endl << "�����ĸ���Ϊ" << b <<endl
		<< "��ֵΪ" << a << endl << "����Ϊ" << d << endl;
	cout << "���������"<<endl;

	for (i = 0; i < 20; i++)
	{
		for (j = i+1; j < 20 ; j++)
		{
			if (p[i] > p[j])
			{
				temp = p[i];
				p[i] = p[j];
				p[j] = temp;
			}
		}
		cout << p[i] <<"  ";
	}

	cout << endl;
	delete []p;	
	system("pause");

	return 0;
}