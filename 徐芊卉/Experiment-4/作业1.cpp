#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int cal1(int a[20])
{ 
	int j = 0,k=0;
	for (int i = 0; i < 20; i++)
	{
		if (a[i] > 0)
			j++;
		else if (a[i] < 0)
			k++;
	}
	cout << "����������������Ϊ" << j<<endl;
	cout << "�������и�������Ϊ" << k<<endl;
	return 0;
}

int cal2(int a[20])
{
	double m = 0, n = 0;
	for (int i = 0; i < 20; i++)
		m += a[i];
	m = m / 20;
	cout << "�������ֵΪ" << m << endl;
	for (int i = 0; i < 20; i++)
		n += pow((a[i] - m), 2);
	n = n / 20;
	cout << "�����鷽��Ϊ" << n << endl;
	return 0;
}
int main()
{
	int *p;
	p = new int[20];
	for (int i = 0; i < 20; i++)
	cin >> p[i];
	for (int i = 0; i < 20; i++)
	cout <<"  "<< p[i];
	cout << endl;
	cal1(p);
	cal2(p);
	sort(p, p + 20);
	for(int i=0;i<20;i++)
	cout <<" "<< p[i];
	delete[]p; 
	system("pause");
	return 0;
}