#include<iostream>
#include<Windows.h>
using namespace std;
float checkAgeScore(int age, float score)
{
	
	if (age < 16 || age>20)throw 1;
	if (score < 0 || score>5)throw 'a';
	return score * 20;
}
int main()
{
	char name[10];
	int age;
	float score;
	cout << "�������ѧ��������" << endl;
	for (int i = 0; i < 10; i++)
	{

		if (name[i] == '\n')
			break;
		else
			cin >> name[i];
	}
	cout << "�������ѧ��������" << endl;
	cin >> age;
	cout << "�������ѧ���ķ���" << endl;
	cin >> score;
	try
	{
		cout << "����" << age << endl;
		cout << "����" << checkAgeScore(age, score) << endl;
	}
	catch (int) {
		cout << "��������쳣";
	}
	catch (char) {
		cout << "���������쳣";
	}
	for (int i = 0; i < 10; i++)
	{

		if (name[i] == '\n')
			break;
		else
			cout << name[i];
	}
	system("pause");
	return 0;
}