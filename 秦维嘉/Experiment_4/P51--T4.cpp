#include <iostream>
using namespace std;
char ch[100];
struct Student
{
	string name;
	int score;
	int age;
};
 float checkAgeScore(int age, float score)
{
	if (age<16||age>25)
	{
		throw age;
		return age;
	}
	if (score<0||score>5)
	{
		throw score;
		return score;
	}
}
int main()
{
	int i, m, n;
	struct Student s[1];
	cout << "����1��ѧ�������ͳɼ�:" << endl;
	for (i = 0; i<10; i++)
	cin >> s[1].name >> s[1].score;
		try
		{
			cout << "����Ϊ" << checkAgeScore(int age, float score)<<endl ;
		    cout << "����Ϊ" << checkAgeScore(int age, float score)<<endl ;
		}
		catch (int )
		{
			cout << "������߷��������Ϸ�Χ"<<endl ;

		}

	return 0;
}
