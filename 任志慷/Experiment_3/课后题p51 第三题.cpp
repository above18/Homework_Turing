#include<iostream>

using namespace std;

void sort1(float x[])//��С��������
{
	int n;
	sort(x[0],x[n],cmp);
	bool cmp(int a,int b)
	{
		return a<b;
	}
    cout << "��С����������:" << a[b] << endl;
}

void statistic1(float *x)//����������������С����
{
	int elem 1, elem 2, elem 3,elem 4;
	for(int i=0;i<=19;i++)
    {
        if(x[i]>=0)
            elem1++;
        else
            elem2++;
        if(x[i]==int(x[i]))
            elem3++;
        else
            elem4++;
    }
    cout << "����:" << elem1 << "����:" << elem2 << "����:" << elem3 << "С��:" << elem4 << endl;
}

void var(float *x)   //�����ֵ�ͷ���
{
    float sum=0,a,b=0;
    for(int i=0;i<=19;i++)
    {sum=sum+*x;
     a=sum/20;
     for(int i=0;i<=19;i++)
     b=b+pow(x[i]-a,2);
    }
    cout << "��ֵ:" << a << "����:" << b << endl;
}

int main{
	int *a;
	a = new int[20];
	int b;
	for (b=0;b<=19;b++)
	cin >> "�������ʮλ����" >> a[b] >> endl;
	sort1(a[b]);
	statistic1(a[b]);
	var(*a);
	delect[]a;
	systerm("pause");
	return 0;
}
