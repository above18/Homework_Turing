#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int *ptr;
	ptr = new int[20];
	cout << "���������ݸ�����";
	int num;
	cin >> num;
	cout << "���������ݵ�ֵ:" << endl;
	int pi = 0;
	int ni = 0;
	for (int i = 0; i < num; i++)
	{
		cin >> ptr[i];
		if (ptr[i] > 0)
		{
			pi++;
		}
		else if (ptr[i] < 0)
		{
			ni++;
		}
	}
	cout << "��������Ϊ:" << pi << endl;
	cout << "��������Ϊ:" << ni << endl;
	sort(ptr, ptr + num);
	cout << "����:";
	for (int i = 0; i < num; i++)
	{
		cout << ptr[i] << " ";
	}
	cout << endl;

	delete[] ptr;
	system("pause");
	return 0;
}