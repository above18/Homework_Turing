#include <iostream>
using namespace std;
float checkAgeScore(int age, float score);
int main()
{
	char name[10];
	int age;
	float score;
	cout << "��˳������ѧ�������������䡢�弶��C++���Է��������ǽ�Ϊ������ٷ��Ƴɼ�" << endl;
	cin >> name >> age >> score;
	checkAgeScore(age, score);
	try
	{
	cout << "ѧ������ϢΪ��"<<name<<"    "<<age<<"    "<<checkAgeScore(age,score) << endl;
	}
	catch (int )
	{
		cout << "���������������������鿴Ҫ����������룡" << endl;
	}
	catch (float)
	{
		cout << "������ĳɼ�����������鿴Ҫ����������룡" << endl;
	}
		cout << "���ݼ�����ϣ���ӭʹ�ã�" << endl;
		system("pause");
		return 0;

	}


float checkAgeScore(int age, float score)
{
	if (age < 16 || age>25) throw 1;
	if (score < 0 || score>5) throw 1.0;

	return score / 100;
}