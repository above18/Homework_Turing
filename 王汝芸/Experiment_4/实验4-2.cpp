#include<stdio.h>
#include<iostream>
using namespace std;

float checkAgeScore(int age, float score)
{
	//float newScore;//�ٷ��Ƴɼ�
	if (age < 16 || age > 25)
	{
		int err1 = 1;
		throw err1;//���䳬����Χ
	}
	
	if(score < 0 ||score > 5)//�ɼ�������Χ
	{
		float err2 = 2.0;
		throw err2;
	}
	cout << "�ٷ��Ƴɼ�Ϊ�� " << float(score*20) << endl;
	return 1;
}
int main()
{
	char name[20];
	int age;
	float score;
	cout << "������ѧ�����������䣨16��25�����弶��C++���Է�����0��5��" << endl;
	cin >> name >> age >> score;

	float newScore = 0;
	try
	{
		checkAgeScore(age, score);
	}
	catch(int)
	{

		cout << "error1:���䲻�ڷ�Χ��" << endl << "��������������:";
		cin >> age;
		try 
		{
			checkAgeScore(age, score);
		}
		catch(float)
		{
			cout << "error2:�ɼ����ڷ�Χ��" << endl << "����������ɼ�:";
			cin >> score;
			checkAgeScore(age, score);
		}
		
	}
	catch (float)
	{
		cout << "error2:�ɼ����ڷ�Χ��" << endl << "����������ɼ�:";
		cin >> score;
		checkAgeScore(age, score);
	}
	
	return 0;
}