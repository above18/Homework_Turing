#include<iostream>
#include<Windows.h>
#include<string>
using namespace std;

float checkAgeScore(int age, float score)
{
	if (age < 16 || age>25)
	{
		throw age;
	}
	
	if (score < 0 || score>5) {
		throw score;
	}
	return 0;
}

int main()
{
	// ��������
	string name;
	cin >> name;

	// ��������
	int age = 0;
	cin >> age;

	// ����ɼ�
	float score = 0;
	cin >> score;

	float checkAgeScore(int age, float score);
	try
	{
		checkAgeScore(age,score);
	}
	catch (int)
	{
		cout << "���䲻����" << endl;
	}
	catch (float)
	{
		cout << "�ɼ�������" << endl;
	}

	system("pause");
	return 0;
}

