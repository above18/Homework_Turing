//��new��������
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int *ptr;
	int i,j;
	int sum1 = 0,sum2=0;
	double aver;
	double E;//����
	int trans;
	ptr = new int[20];
	cout << "����������" << endl;
	for (i = 0; i < 20; i++)
		cin >> *(ptr + i);
	for (i = 0; i < 20; i++)//�����������ķֱ����
	{
		if (*(ptr + i) < 0)
		{
			sum1 = sum1 + 1;
			
		}
		if (*(ptr + i) > 0)
		{
			sum2 = sum2 + 1;
			
		}
	}
	cout << "��Щ�����еĸ�����" << sum1 << "��" << endl;
	cout << "��Щ�����е�������" << sum2 << "��" << endl;

	for (i = 0;i < 20;i++)//�����ֵ�ͷ���
	{
		aver = (*ptr + *(ptr + i)) / 20;
		E = ((*ptr - aver)*(*ptr - aver) + (*(ptr + i) - aver)*(*(ptr + i) - aver)) / 20;
	}
	cout << "��ֵΪ" << aver << endl;
	cout << "����ֵΪ" << E << endl;

	//�����������
	for (i = 0;i < 20;i++)
	{
		for(j=0;j<20;j++)
			if (*(ptr + i) < *(ptr + j))
			{
				trans = *(ptr + i);
				*(ptr + i) = *(ptr + j);
				*(ptr + j) = trans;
			}

	}	
	cout << "�����и�Ԫ�ذ��մ�С�����˳�����Ϊ��" ;
	    for (i = 0;i < 20;i++)
		cout<<  *(ptr+i)<<" ";
		delete[]ptr;
	system("pause");
	return 0;
	
		

}
