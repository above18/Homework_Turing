#include<iostream>
using namespace std;
int main()
{
	int *p, i, a = 0, b = 0,c = 0,s = 0,j,t;
	p = new int[20];
	for (i = 0; i < 20; i++)
	{
		cin >> p[i];
		if (p[i] > 0)
			a++;
		if (p[i] < 0)
			b++;
	}
	cout << "����Ϊ" << a << endl;
	cout << "����Ϊ" << b;
	for (i = 0; i < 20; i++)
		c = p[i] + c;
	    s = s + p[i] ^ 2;
		cout << "��ֵΪ" << c / 20 << endl;
		cout << "����Ϊ" << s / 20 << endl;
		for (j = 0; j < 20; j++)
			for (i = 0; i < 20 - j; i++)
				if (p[i] > p[i + 1])
				{
					t = p[i];
					p[i] = p[i + 1];
					p[i + 1] = t;
				}
		printf("����õ�����Ϊ��\n");
		for (i = 0; i < 20; i++)
			printf("%d ", p[i]);
		printf("\n");
		delete[]p;
	return 0;
}
