#include<iostream>
using namespace std;
float checkAgeScore(int age,float score)
{
	float m;
	if (age < 16 || age>25)
		throw age;
	if (score < 0 || score>5)
		throw score;
	return score*20;
}
int main()
{
	char n[20];
	int a;
	float s;
	cin >> n>> a >> s;
    try
	{
		cout<<"��ѧ���ɼ�Ϊ"<<checkAgeScore(a, s)<<endl;
	}
	catch (int)
	{
		cout << "����error" << endl;
	}
	catch (float)
	{
		cout << "�ɼ�error" << endl;
	}
	cout << "��ѧ������Ϊ" << n<<endl;
	cout << "��ѧ������Ϊ" << a<<endl;
	system("pause");
	return 0;
}