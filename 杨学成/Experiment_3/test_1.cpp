#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int *ptr;
	ptr = new int[20];
	cout << "Please input:";
	for (int i = 0; i < 20; i++)
	{
		cin >> ptr[i];
	}



	//ͳ��������
	int zs = 0, fs = 0;
	for (int i = 0; i < 20; i++)
	{
		if (ptr[i] > 0) zs++;
		else if (ptr[i] < 0) fs++;
	}
	cout << "������" << zs << endl << "������" << fs << endl;




	//���ֵ
	int sum = 0, M;
	for (int i = 0; i < 20; i++)
	{
		sum += ptr[i];
	}
	M = sum / 20;
	cout << "��ֵ��" << M << endl;



	//�󷽲�
	int s, t = 0;
	for (int i = 0; i < 20; i++)
	{
		t += (ptr[i] - M)*(ptr[i] - M);
	}
	s = t / 20;
	cout << "���" << s << endl;



	//����
	for (int i = 0; i < 20; i++)
	{
		for (int j = i + 1; j < 20; j++) {
			if (ptr[i] > ptr[j]) {
				int temp = ptr[i];
				ptr[i] = ptr[j];
				ptr[j] = temp;
			}
		}
	}
	for (int i = 0; i < 20; i++)
		cout << ptr[i] << endl;



	delete[]ptr;
	system("pause");
	return 0;
}