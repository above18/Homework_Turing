#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	int *tj,a=0,b=0,c=0,d=0,i;
	tj = new int[20];
	for (i = 0; i < 20; i++)
	{
		cin >> tj[i];
		if (tj[i] > 0)
			a++;
		if (tj[i] < 0)
			b++;
		if (i == (int)i)
			c++;
		else
			d++;
	}
	cout << "�����ĸ���Ϊ��" << a << endl;
	cout << "�����ĸ���Ϊ��" << b << endl;
	cout << "�����ĸ���Ϊ��" << c << endl;
	cout << "С���ĸ���Ϊ��" << d << endl;
		
	delete[]tj;


	system("pause");
	return 0;
}