#include<iostream>
#include<Windows.h>

using namespace std;

typedef struct student
{
	char name[20];
	int age;
	float score;
}Student;
float checkAgeScore(int age, float score);
int main()
{
	int i = 0;
	cout << "����ѧ������" << endl;
	cin >> i;

	Student *a = new Student[i];

	cout << "����ѧ�������������C++�ɼ�" << endl;

	int k = 0;
	for (k = 0; k < i; k++)
		cin >> a[k].name >> a[k].age >> a[k].score;

	cout << "�������" << endl;

	try
	{
		for (k = 0; k < i; k++)
			a[k].score=checkAgeScore(a[k].age, a[k].score);
	}
	catch (int)
	{
		cout << "���䲻����"<<endl;
		system("pause");
		return 0;
	}
	catch (float)
	{
		cout << "�ɼ�������"<<endl;
		system("pause");
		return 0;
	}
	for (k = 0; k < i; k++)
	{
		cout << a[k].name << "  " << a[k].age << "  " << a[k].score << endl;
	}
	

	delete [i]a;

	system("pause");
	return 0;
}
float checkAgeScore(int age, float score)
{
	if (age<16 || age>25)throw age;
	if (score<0 || score>5)throw score;
	return score * 20;
}