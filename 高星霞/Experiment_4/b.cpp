#include<iostream>
using namespace std;

float checkAgeScore(int age, float score)
{
	if (age < 16 || age>25)
		throw age;
	if (score < 0 || score>5)
		throw score;
	return score * 20;
}
int main()
{

	char name[10];
	int age;
	float score;
	cout << "������ѧ��������������ͳɼ�:";
	cin >> name >> age >> score;
	try
	{
		score = checkAgeScore(age, score);
		cout << "ѧ������:" << name << " " << "����:" << age << " " << "�ٷ��Ƴɼ�:" << score << endl;

	}
	catch (int e)
	{
		cout << "ѧ�������в��" <<e<< endl;
	}
	catch (float e)
	{
		cout << "ѧ���ɼ��в��"<<e<< endl;
	}
	return 0;
	system("pause");

}