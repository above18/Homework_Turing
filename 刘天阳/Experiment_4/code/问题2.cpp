#include<iostream>
#include "String.h"
using namespace std;

struct Student
{
	char name[20];
	int age;
	float score;
};

float checkAgeandScore(int age, float score)
{
	if ((age < 16) || (age > 25))
	{
		throw age;
	}
	if ((score<0)||(score>5))
	{
		throw score;
	}
	float new_score = score * 20;
	return new_score;
}

int main()
{
	Student* new_stud = new Student;
	cout << "������ѧ������������(16~25)��c++�ɼ�(0~5)" << endl;
	cin >> new_stud->name>> new_stud->age >> new_stud->score;
	try
	{
		float a=checkAgeandScore(new_stud->age,new_stud->score);
		if (a>=0)
		{
			cout << "ѧ������" << new_stud->name << endl;
			cout << "����:" << new_stud->age << endl;
			cout << "�ٷ��Ƴɼ�" <<a<< endl;
		}
	}
	catch (int)
	{
		cout << "����Ӧ����16~25֮��" << endl;
	}
	catch (float)
	{
		cout << "�ɼ�Ӧ����0~5֮��" << endl;
	}
	cout << "����ѧ����Ϣ����" << endl;
	delete new_stud;
	system("pause");
	return 0;
}