#include<iostream>
#include<Windows.h>
using namespace std;
int main()
{
	int *n;
	n = new int[20];
	cout << "please input 20 numbers:" << endl;
	for (int i = 0; i < 20  ; i++)
	{
		cin >> n[i];
	}
	int zheng=0,fu=0,i=0;
	double junzhi, fangcha, sum = 0, k = 0;
	for(int i = 0; i < 20; i++)
	{
		if (n[i] > 0)
		{
			zheng = zheng + 1;
		}
		if (n[i] < 0)
		{
			fu = fu + 1;
		}
	}
	
	for(int i=0; i < 20; i++)
	{
		sum = sum + n[i];
	}
	junzhi = sum / 20;

	for (i = 0; i < 20; i++)
	{
		k = k + pow(n[i] - junzhi, 2);
	}
	fangcha = k / 20;

	cout << "��������Ϊ" << zheng << '\n' << "��������Ϊ" << fu << '\n' <<"����Ϊ"<<'\n'<<fangcha<< "��ֵΪ" << junzhi << '\n' << endl;

	for (int i = 0; i < 19; i++)
	{
		for (int j = i + 1; j <20; j++)
		{
			if (n[i] > n[j])
			{
				int t = n[i];
				n[i] = n[j];
				n[j] = t;
			}

		}
	}


	cout << "����֮��Ϊ��" << endl;
	for (i = 0; i < 20; i++)
	{
		cout << n[i]<<'\t';
	}
	delete [20]n;
	system("pause");
		return 0;
}