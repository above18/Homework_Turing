#define _CRT_SECURE_NO_DEPRECATE	//ȷ��fscanf��fprintf���ã��궨�����';'
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
using namespace std;
int num=0;  //ѧ������ 

struct stu_info									
{
	char StudentID[20];		//ѧ��
	char Name[20];			//����
	int daily_score;		//ƽʱ�ɼ�
	int exp_score;			//ʵ��ɼ�
	int final_score;		//��ĩ�ɼ�
	double score;			//���ճɼ�	double ������%f��
	int rank;				//����
}Student[100];									

void stu_info_view()  //ѧ����ϢԤ��
{
	cout << "������ �� " <<num<< endl;
	cout << "ѧ��\t\t����\tƽʱ�ɼ�    ʵ��ɼ�\t    ��ĩ�ɼ�\t    ���ճɼ�\t����" << endl;
	for (int i = 0; i < 6; i++) //��0ʼ

	{
		printf("%10s\t%s\t   %d\t\t%d\t%10d\t%10.2f\t%d\n", Student[i].StudentID, Student[i].Name, Student[i].daily_score, Student[i].exp_score, Student[i].final_score, Student[i].score, Student[i].rank);
	}
}

//F1���ļ�data.txt�ж�ȡ����ѧ���ɼ���Ϣ	
void readdata_txt()
{
	printf("\n-------Step1: ���ļ��ж�ȡѧ����Ϣ--------\n");
	FILE *fp = NULL;
	fp = fopen("data.txt", "r");
	//1.��ȡѧ����Ŀ
	if (fp != NULL)
	{
		fscanf(fp, "%d", &num);
	}
	else
	{
		printf("failed to open the info file\n");
		getchar();
	}
	printf("ѧ����ĿΪ:%d\n", num);
	//getchar();

	//2.������ѧ������洢�ռ�
	//stu = malloc(count * sizeof(SS));

	//3.��ȡÿ��ѧ������Ϣ������ʾ
	cout << "�ļ���ѧ����Ϣ���£�" << endl;
	int i = 0;
	while ((!feof(fp)) && (i < num))
	{
		//�����ļ����ݵ��ڴ�	
		fscanf(fp,"%s%s%d%d%d\n", (Student[i].StudentID), (Student[i].Name), &Student[i].daily_score, &Student[i].exp_score,&Student[i].final_score);
		//���ԭʼѧ����Ϣ
		printf("* ѧ�ţ�%s	����:%s	ƽʱ�ɼ���%d��	ʵ��ɼ���%d��	��ĩ�ɼ�:%d��\n", (Student[i].StudentID), (Student[i].Name), Student[i].daily_score, (Student[i].exp_score),Student[i].final_score);
		i++;
	}
	fclose(fp);
}

//F2����ѧ���ɼ���Ϣ�����ѧ���ɼ�������
//���㵥��ѧ�����ճɼ�
double calc_stu_final_score(stu_info stu)
{
	double score = 0;
	score = stu.daily_score * 0.2 + stu.exp_score * 0.2 + stu.final_score * 0.6;//***pc-calc������***
	return score;
}
//����ȫ��ѧ�����ճɼ�
void calc_all_stu_final_score()
{
	for (int i = 0; i < num; i++) 
	{
		Student[i].score = calc_stu_final_score(Student[i]);
	}
}
//������ѧ����������
void sort_all_stu_rank()
{	
	for (int i = 0; i < 6; i++)
	{
		Student[i].rank = 1;
		for (int j = 0; j < 6; j++)
		{
			if (Student[i].score < Student[j].score)
			{
				Student[i].rank++;
			}
		}
	}
}

//F3��ѧ�Ų���ѧ���ɼ���Ϣ
void search_stu()
{
	string str;
	cout << "����ѧ�Ž��в��ң����� over ��������ѯ��\n" << endl;
	cin >> str;
	if (str == string("over"))
	{
		cout << "��������" << endl;
	}
	else
	{
		int flag = 0;
		for (int i = 0; i < 6; i++)
		{
			if (Student[i].StudentID == str)
			{
				cout << "        ѧ��       ����        ƽʱ�ɼ�     ʵ��ɼ�   ��ĩ�ɼ�   ���ճɼ�    ����" << endl;
				printf("%15s %10s %10d %10d %10d %13.2f%10d\n\n\n", Student[i].StudentID, Student[i].Name, Student[i].daily_score, Student[i].exp_score, Student[i].final_score, Student[i].score, Student[i].rank);
				flag = 1;
			}
		}
		if (flag == 0) cout << "��ѯ������ѧ��������������" << endl;
	}
	
}

//F4ͳ�Ƴ��ÿγ̳ɼ��ľ�ֵ�ͷ�����Գɼ��ֲ���Ҫ����
void calc_mean_variance_and_analyze()
{
	cout << "\n ****** ����ѧ���ĳɼ��ֲ���� ******\n" << endl;
	double sum_d = 0, sum_e = 0, sum_f = 0, sum_s = 0;
	double daily_score_mean = 0, daily_score_variance = 0;			 
	double exp_score_mean = 0, exp_score_variance = 0;	 
	double final_score_mean = 0, final_score_variance = 0;				
	double score_mean = 0, score_variance = 0;						 
//�������ɼ��ܺ�
	for (int i = 0; i <num; i++)
	{
		sum_d += Student[i].daily_score;  
		sum_e += Student[i].exp_score;
		sum_f += Student[i].final_score;
		sum_s += Student[i].score;	
	}
//�������ɼ���ֵ
	daily_score_mean = sum_d / (1.0 * num);	 
	exp_score_mean = sum_e / (1.0 * num);		 
	final_score_mean = sum_f / (1.0 * num);	
	score_mean = sum_s / (1.0 * num);		
//�������ɼ�����
	for (int i = 0; i <num; i++)
	{
		daily_score_variance += pow(fabs(Student[i].daily_score - daily_score_mean), 2)/num;  
		exp_score_variance += pow(fabs(Student[i].daily_score - exp_score_mean), 2) / num;
		final_score_variance += pow(fabs(Student[i].daily_score - final_score_mean), 2) / num;
		score_variance += pow(fabs(Student[i].daily_score - score_mean), 2) / num;
	}
	cout << "      ƽʱ�ɼ�      ʵ��ɼ�     ��ĩ�ɼ�     ���ճɼ�" << endl;
	printf("��ֵ��%10.2f %10.2f %10.2f %10.2f\n", daily_score_mean, exp_score_mean, final_score_mean, score_mean);
	printf("���%10.2f %10.2f %10.2f %10.2f\n\n\n", daily_score_variance, exp_score_variance, final_score_variance, score_variance);
	//�����ɼ�
	string str;
	ifstream readFile;						//����һ�����ļ�����
	readFile.open("Analysis_score.txt");	//����Ҫ�������ļ�
	readFile >> str;						//��ȡ�������
	readFile.close();						//�ر��ļ�
	int n = 0;
	cout<<"����1�鿴���з������������2�޸ķ���\n"<<endl;
	cin >> n;
	if (n == 1) cout << str << endl;
	if (n == 2)
	{
		ofstream writeFile;						//����һ��д�ļ�����
		writeFile.open("Analysis_score.txt");	//����Ҫд����ļ�
		printf("���޸ķ��������\n");
		cin >> str;
		writeFile << str;						//��str������д��ȥ
		printf("\n�޸ĳɹ�\n");
		writeFile.close();				
	}
}
