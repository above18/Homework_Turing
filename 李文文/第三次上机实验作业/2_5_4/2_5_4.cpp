#include<iostream>

using namespace std;

float checkAgeScore(int age, int score);

typedef struct S
{
	char name[20];
	int age;
	float score;
};

int main()
{
	S Stu;
	cout << "������ѧ����������������弶��C++���Է�����" << endl;
	cin >> Stu.name

		>> Stu.age >> Stu.score;
	float  sco;
	try
	{

		sco = checkAgeScore(Stu.age, Stu.score);
	}
	catch (int)
	{
		cout << "����������Χ��������Ҫ������Ϊ16~25������Ϊ0~5��" << endl;
	}
	cout << "\nѧ������ " << Stu.name<< "\nѧ������:" << Stu.age << "\nѧ���ɼ���" << sco << endl;
	system("pause");
	return 0;

}


float checkAgeScore(int age, int score)
{
	if (age < 16 || age>25 || score < 0 || score>5)
		throw 0;
	return(score * 20);
}
