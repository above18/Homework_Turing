#include<iostream>
#include<windows.h>
using namespace std;




float checkAgeScore(int age, float score)
{
	if (age < 16 || age>25)
		throw age;
	if (score < 0 || score>5)
		throw score;
		return score;
}



int main() 
{
	char name[10];
	cout << "������ѧ������������#�ż���������" << endl;
	char a;
	int n = 0;
	do 
	{
		cin >> a;
		name[n] = a;
		n++;
	} while (a != '#');



	cout << "������ѧ�����䣺" << endl;
	int age;
	cin >> age;


	cout << "������ѧ���弶��C++���Է�����";
	float score;
	cin >> score;


	try
	{
		cout << "ѧ��������";
		for (int i = 0; i < n-1; i++)
		{
			cout << name[i];
		}
		cout << endl;
		cout << "���䣺" << age << endl;
		cout << "������" << checkAgeScore(age, score)*20 << endl;
	}
	catch (int)
	{
			cout << "ѧ��������ʵ�ʲ���" << endl;
	}
	catch (float)
	{
		cout << "ѧ��������ʵ�ʲ���" << endl;
	}


	system("pause");
	return 0;
}