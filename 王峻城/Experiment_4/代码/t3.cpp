#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int *ptrp;
	int *ptrn;
	ptrp = new int[20];
	ptrn = new int[20];
	cout << "���������ݸ�����";
	int num;
	cin >> num;
	cout << "����������:" << endl;
	int x;
	int pi = 0;
	int ni = 0;
	for (int i = 0; i < num; i++)
	{
		cin >> x;
		if (x > 0)
		{
			ptrp[pi++] = x;
		}
		else if (x < 0)
		{
			ptrn[ni++] = x;
		}
	}
	cout << "����������Ϊ��" << pi << endl;
	cout << "�����и���Ϊ��" << ni << endl;
	sort(ptrp, ptrp + pi);
	sort(ptrn, ptrn + ni);
	cout << "��������Ϊ:";
	for (int i = 0; i < pi; i++)
	{
		cout << ptrp[i] << " ";
	}
	cout << endl << "��������Ϊ:";
	for (int i = 0; i < ni; i++)
	{
		cout << ptrn[i] << " ";
	}
	cout << endl;

	delete[] ptrp;
	delete[] ptrn;
	system("pause");
	return 0;
}