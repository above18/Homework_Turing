#include<iostream>
#include<algorithm>
#include<cstdlib>
using namespace std;
int main()
{
	float *p;
	float a = 0; float b = 0;float c = 0;
	p = new float[20];
	cout << "������20����:" << endl;
	for (int i = 0; i < 20; i++)
	{
		cin >> p[i];
		if (p[i] > 0)
			a++;
		else
			if (p[i]<0)
			{
				b++;
			}
		c += p[i];

	}
	cout << "����������������Ϊ��" << a << endl << "��������Ϊ��" << b << endl;
	float aver;
	float d = 0;
	aver = c / 20;
	for (int i=0;i<20;i++)
	{
		d += pow(p[i] - aver, 2);
	}
	float varince;
	varince = d / 20;
	cout << "��������ƽ��ֵ�ǣ�" << aver << endl << "������" << varince << endl;
	delete p;
	system("pause");
	return 0;
}
	
