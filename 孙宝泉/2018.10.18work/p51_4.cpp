#include<iostream>
using namespace std;
void checkAgeScore(int age, char score)
{
	if (age < 16 || age>25)  throw age;
	if (score < 'A'|| score>'E') throw score;
	switch (score)  //ͨ��switch������score��Ӧ�İٷ��Ʒ���
	{
	
	case'E':
		cout << "60-" << endl;
		break;
	case'D':
		cout << "60-69" << endl;
		break;
	case'C':
		cout << "70-79" << endl;
		break;
	case'B':
		cout << "80-89" << endl;
		break;
	case'A':
		cout << "90+" << endl;
		break;
	}
	
}
int main()
{
	char a[20];
	int age;
	char score;
	cin >> a;
	cin >> age >> score;
	try   //��һ��try
	{
		cout << "������" << a << "    ���䣺" << age;
		cout << "   �ٷ��Ƴɼ�Ϊ��";
		checkAgeScore(age,score);
		cout << endl;
	}
	/*****�����Ӧ�쳣*****/
	catch (int)
	{
		cout << "���䲻�ڷ�Χ(16~25)  ���������룺 ";
		cin >> age;
	}
	catch (char)
	{
		cout << "�ɼ����ڷ�Χ(A~E)  ���������룺 ";
		cin >> score;
	}
	if (score < 'A' || score>'E') //��������쳣���ڶ���try
	{
		try
		{
			cout << "������" << a << "    ���䣺" << age;
			cout << "    �ٷ��Ƴɼ�Ϊ��";
			checkAgeScore(age, score);
			cout << endl;
		}
		catch (char)
		{
			cout << "�ɼ����ڷ�Χ(A~E)�����������룺 ";
			cin >> score;
		}
	}
	cout << "������" << a << "   ���䣺" << age << "    �ٷ��Ƴɼ�Ϊ: " ;
	checkAgeScore(age, score);
	cout << endl;
	system("pause");
	return 0;
	

}