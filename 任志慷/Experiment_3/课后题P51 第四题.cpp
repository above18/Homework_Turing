#include<iostream>

using namespace std;

float CheckAgeScore(int age,float score)
{
    if(age<19||age>25)
        throw age;
    if(score<0||score>5)
        throw score;
    return score*20;
}

int main{
    char *name;
    int age;
    float score;
    cout << "������ѧ������������ͳɼ�" << endl;
    cin >> name >> age >> score;
    try
    {
        age=CheckAgeScore(age,score);
        score=CjeckAgeScore(age,score);
        cout << "������" << name << "���䣺" << age << "�ɼ���" << score << endl;

        catch(int)
        cout << "�����������" << endl;

        catch(float)
        cout << "�ɼ��������" << endl;
    }
    system("pause");
    return 0;
    }
