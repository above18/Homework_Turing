#include<iostream>
#include<cstdlib>
using namespace std;
float checkAgeScore(int age, float score)
{
	if (age>25||age<16)
	{
		throw age;
	}
	if (score>5||score<0)
	{
		throw score;
	}
	return score * 20;
}


int main()
{
    char name[5];
    int age;
    float score;
	student a;
	cout << "����������ѧ�������������䡢�弶�Ʒ���" << endl;
	cin >> name >>age >> score;
	try
	{
		cout << "��ͬѧ�ɼ�Ϊ��" << checkAgeScore(age,score) << endl;
	}
	catch (int)
	{
		cout << "�����������" << endl;
	}
	catch (float)
	{
		cout << "�ɼ��������" << endl;
	}
	system("pause");
	return 0;
}
