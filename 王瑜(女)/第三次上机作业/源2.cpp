#include<iostream>
#include<stdlib.h>
using namespace std;

//����Χ��麯��
float checkAgeScore(int age, float score)
{
	if ((age<16) || (age>25))    throw age;
	if ((score<0) || (score>5))  throw score;
	return score;
}

int main()
{
	char name[20];//ѧ������
	int age;//ѧ������
	float score;//ѧ���ɼ�

	cout << "������һλͬѧ������Ϣ" << endl;
	cout << "������ ���䣺 �ɼ���" << endl;
	cin >> name >> age >> score;

	try//��������Ƿ�����
	{
		cout << "ѧ��������" << name << endl;
		cout << "ѧ�����䣺" << age << endl;
		cout << "ѧ���ɼ���" << checkAgeScore(age, score) << endl;
	}

	catch (int)//��׽�쳣������Ϣ���������ʾ
	{
		cout << "ѧ�������������" << endl;
	}

	catch (float)//��׽�쳣������Ϣ���������ʾ
	{
		cout << "ѧ�������������" << endl;
	}

	cout << "��������" << endl;//catch��������

	return 0;
}
