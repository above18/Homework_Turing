#include<iostream>
using namespace std;
int checkAgeScore(int age, int score)
{
	if (!(age >= 16 && age <= 25))
		throw 1;
	if (!(score >= 0 && score <= 5))
		throw 1.0;
	return score;
}
int main()
{
	char name[6];
	int age;
	int score;
	int agetest;
	int scoretest;
	cout << "���������֣�" << endl;
	cin.getline(name,6);
	cout << "����������ͷ���:" << endl;
	cin >>age;
	cin >> score;
	try {
		scoretest = checkAgeScore(age, score);
		cout << "����Ϊ��";
		for (int i = 0; i < 6; i++)
			cout << name[i];
		cout << endl;
		cout << "����Ϊ;" << age<<endl;
		cout << "����Ϊ��" << score << endl;
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
