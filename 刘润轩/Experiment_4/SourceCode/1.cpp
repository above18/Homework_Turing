#include<iostream>
using namespace std;
int main()
{
	float *p, a = 0, b = 0,c=0,d=0,sum=0,aver=0,vari=0,varisum=0; //a��������b�Ǹ�����c��������d��С��
	float l = 0;
	int i;//averƽ����   vari����
	p = new float[20];
	cout << "������20����" << endl;
	for (i = 0; i < 20; i++)//����
	{
		cin >> p[i];
		if (p[i] > 0)
			a++;
		if (p[i]<0)
			b++;

		{
			if (p[i] == int(p[i]))
			c++;
		else
			d++;
		}
		sum += p[i];

	}
	     
	aver = sum / 20;
	

	for (int k = 0; k < 20; k++)
	{
		l = (p[k] - aver)*(p[k] - aver);
			varisum += l;
	}

	vari = varisum / 20;

	cout << "�������" << endl;

	for (int i = 0; i < 20; i++)
	{
		for (int j = i + 1; j < 20; j++)
		{
			if (p[i] > p[j])    //���ǰһ��Ԫ�ش��ں�һ��Ԫ��
			{
				float temp;        //��ʱ����
				temp = p[i];
				p[i] = p[j]; //С��Ԫ�ص�ǰһ��λ��
				p[j] = temp;   //���Ԫ�ص���һ��λ��
			}
		}
	}
	// �����Ԫ��
	for (int k = 0; k < 20; k++)
		cout << p[k] << endl;
		                   



	cout << "����Ϊ" <<  a << endl;
	cout << "����Ϊ" <<  b << endl;
	cout << "����Ϊ" <<  c << endl;
	cout << "С��Ϊ" <<  d << endl;
	cout << "ƽ����Ϊ" <<  aver << endl;
	cout << "����Ϊ" <<  vari << endl;
	  
	delete[]p;
	system("pause");
	return 0;
}