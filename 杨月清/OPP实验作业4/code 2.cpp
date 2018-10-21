#include<iostream>
using namespace std;
float checkAgeScore(int age, float score)
{
	if (age > 25 || age < 16)
		throw age;
	if (score < 0 || score>5)
		throw score;
	return score * 20;
}
int main()
{
	char name[20];
	int age; float score;
	cin >> name >> age >> score;
	try {
		score = checkAgeScore(age, score);
		cout << "ѧ��������" << name << " " << "ѧ�����䣺" << age << " " << "ѧ���ٷ��Ʒ���:" << score << endl;
	}
	catch (int e) {
		cout << "�������" << e << endl;
	}
	catch (float)
	{
		cout << "��������" << endl;
	}
	system("pause");
	return 0;
}