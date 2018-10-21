#include<cstdio>
#include<iostream>
#include<fstream>
#include<cmath>
#include<algorithm>

using namespace std;

struct student
{
	string stu_ID, name;
	double d_score, t_score, e_score, f_score;
	int rank1;
}stu[100];

double cal_tscore(double d, double e, double f)
{
	return 0.2 * d + 0.2 * e + 0.6 * f;
}

bool cmp(student a, student b)
{
	return a.t_score > b.t_score;
}

int main()
{
	string s;					//��Ҫ��ѯ��ѧ����ѧ��
	bool flag;
	double ave, var, sum = 0, s2;   //ƽ���֣� ��� �ܳɼ��Ӻͣ�����*������
	int ans;
	ifstream fin;
	fin.open("date.txt");
	int t;
	fin >> t;//printf("t = %d\n", t);
	for (int i = 0; i < t; i++)
	{
		fin >> stu[i].stu_ID >> stu[i].name >> stu[i].d_score >> stu[i].e_score >> stu[i].f_score;
		stu[i].t_score = cal_tscore(stu[i].d_score, stu[i].e_score, stu[i].f_score);//cout << '\n' << stu[i].t_score<<endl;
		sum += stu[i].t_score;
	}
	fin.close();
	s2 = 0;
	ave = sum / (double)t;
	for (int i = 0; i < t; i++)
	{
		s2 += abs((stu[i].t_score - ave) * (stu[i].t_score - ave));
	}
	var = s2 / (double)t;
	printf("���γ̵�ƽ���ɼ�Ϊ��%f ��  ", ave);
	if (ave < 60.0)
		printf("�ɼ���̫����\n");
	else if (ave < 85.0)
		printf("�ɼ�����\n");
	else
		printf("�ɼ�����\n");
	printf("\t�ɼ�����Ϊ: %f\n", var);
	sort(stu, stu + t, cmp);
	printf("������ѧ���Բ�ѯ�ɼ�, ��0�˳�\n\n");
	while(cin >> s)
	{//cout << stu[0].stu_ID<< s;
        flag = 0;
	    if(s == "0")
            break;
        else
        {
            for (int i = 0; i < t; i++)
            {
                if (stu[i].stu_ID == s)
                {
                    flag = 1;
                    ans = i;//printf("%d\n\n\n\n", i);
                    break;
                }
            }
            if (flag)
            {
                cout << "����:" << stu[ans].name << '\n';
                cout << "ƽʱ�ɼ�:" << stu[ans].d_score << '\n';
                cout << "ʵ��ɼ�:" << stu[ans].e_score << '\n';
                cout << "��ĩ�ɼ�:" << stu[ans].f_score << '\n';
                cout << "�ۺϳɼ�:" << stu[ans].t_score << '\n';
                cout << "����:" << ans+1 << '\n' << endl;
                flag = 0;
            }

            else
                printf("û���ҵ���ѧ�ųɼ��� ������������\n");
            }
	}



	return 0;
}