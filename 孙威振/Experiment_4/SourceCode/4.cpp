#include<iostream>
#include<windows.h>
#include<string>
using namespace std;

float checkAgeScore(int age,float score)
{
	if (age > 25 || age < 16)
		throw age;
	if (score < 0 || score>5)
		throw score;
}

int main()
{
	string name;
	int Age;
	float Score;
	cout << "������һ��ѧ�������֣�";
	cin >> name;
	cout << "�������ѧ�������䣺";
	cin >> Age;
	cout << "�������ѧ���ĳɼ���";
	cin >> Score;
	
	try
	{
		checkAgeScore(Age, Score);
		cout << "�����ѧ����������" << name<<endl;
		cout << "�����ѧ�������䣺" << Age<<endl;
		cout << "�����ѧ���ĳɼ���" << Score*20<<endl;
	}
	catch (float)
	{
		cout << "�ɼ���ƥ��" << endl;
	}
	catch (int)
	{
		cout << "���䲻ƥ��" << endl;
	}
	

	system("pause");
	return 0;
}

