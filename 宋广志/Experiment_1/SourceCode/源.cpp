#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cmath>
#include<fstream>
#include"��ͷ.h"
#include<Windows.h>
using namespace std;
int main()
{
	readdata_txt();
	cout << "readdata_txt()-over" << endl;
	calc_all_stu_final_score();					//��������ѧ�������ճɼ�
	sort_all_stu_rank();						//������ѧ����������
	cout<<"����0 ���˳�ѧ���ɼ�����ϵͳ\n����1 ��ȫ��ѧ���ɼ�Ԥ��\n����2 ����ѧ�Ų�ѯѧ����Ϣ\n����3 ���鿴ѧ���ɼ���ֵ��������гɼ�����\n"<<endl;
	while (1) 
	{
		printf("\n��������ָ�");
		int n = 0;
		cin >> n;
		if (n == 0) break;
		switch (n)
		{
			case 1:
			{
				stu_info_view();					//ѧ����ϢԤ��
				break;
			}
			case 2: 
			{
				string n2;
				while (1) 
				{
					cout << "���� over ��������ѯ������ѧ�ż������в��ҡ�\n"<< endl;
					cin >> n2;
					if (n2 == string("over")) break;
					else 
					{
						search_stu(n2);				//F3��ѧ�Ų���ѧ���ɼ���Ϣ
					}
				}
				break;
			}
			case 3: 
			{
				calc_mean_variance_and_analyze();   //F4ͳ�Ƴ��ÿγ̳ɼ��ľ�ֵ�ͷ�����Գɼ��ֲ���Ҫ����
				break;
			}
			default: cout << "����ָ��������������� :" << endl;
		}
	}
	system("pause");
	return 0;
}