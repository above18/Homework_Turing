#include<cstdio>
#include<string>
#include<iostream>

using namespace std;

int  checkAge(int age)
{
    if(age < 16 || age > 25)
        throw age;
    return age;
}

float checkScore(float score)
{
    if(score>5.0 || score <0.0)
    throw score;
    return score;
}

int main()
{
    string name;
    int age;
    float score;
    cin >> name >> age >> score;
    try
    {
        cout << "������ "<<name <<" " <<"���䣺 "<< checkAge(age) <<" "<< "�弶�Ƴɼ��� " << checkScore(score) << endl;
    }
    catch(int)
    {
        cout << "���䲻����Ҫ�������봦��16-25���������"<< endl;
    }
    catch(float)
    {
        cout <<"�ɼ�������Ҫ�� �����������弶�Ƴɼ�" << endl;
    }
    return 0;
}
