#include<iostream>
#include<windows.h>
using namespace std;
float checkAgeScore(int age, float score);
int main()
{
	char xingming[20];
	int age;
	float score;
	cout << "������ѧ����������" ;
	cin >> xingming[20];
	cout << "���������䣺";
	cin >>age;
	cout << "������������c++���Է�����";
	cin >> score;
	try
	{
		checkAgeScore(age, score);
	}
	catch (int)
	{
		cout << "error1:���䲻�ڷ�Χ�ڣ����������룺"<<endl;
		cin >> age;
		try
		{
			checkAgeScore(age, score);
		}
		catch (float)
		{
			cout << "error2���ɼ����ڷ�Χ�ڣ����������룺" << endl;
			cin >> score;
			checkAgeScore(age, score);
		}
	}
	catch (float)
	{
		cout << "error2���ɼ����ڷ�Χ�ڣ����������룺" << endl;
		cin >> score;
		checkAgeScore(age, score);
	}
	cout << "������" << xingming[20] << endl;
	cout << "���䣺" << age << endl;
	cout << "�ɼ�:" << score * 20 << endl;
	system("pause");
	return 0;
}
float checkAgeScore(int age, float score)
{
		if (age > 25 || age < 16)
		{
			int error1 = 1;
			throw error1;
		}
		if (score < 0 || score>5)
		{
			float error2 = 2.0;
			throw error2;
		}
		cout << "�ٷ��Ƴɼ�Ϊ�� " << float(score * 20) << endl;
		return 1;
}
