#include<iostream>
#include<windows.h>
using namespace std;
float checkAgeScore(int age, float score)
{
	if (age < 16 || age>25)
		throw age;
	else if (score < 0 || score>5)
		throw score;
	else
		return score * 20;
}
int main()
{
	char n[10];
	int age;
	float score;
	cout << "������ѧ��������";
	cin >> n;
	cout << "���������䣺";
	cin >> age;
	cout << "���������:";
	cin >> score;
	cout << endl;

	try
	{
		cout << "��ѧ���ĳɼ�Ϊ��" << checkAgeScore(age, score) << endl;
	}
	catch (int)
	{
		cout << "�������" << endl;
	}
	catch (float)
	{
		cout << "��������" << endl;
	}
	system("pause");
	return 0;
}