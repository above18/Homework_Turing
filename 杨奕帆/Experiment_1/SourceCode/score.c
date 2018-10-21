/*************************************************
** Դ�ļ�   : score.c
** ����˵�� : Function Definations
** ����ʱ�� : 2018-9-21/17:35
/**************************************************/

/*----------------ͷ�ļ�--------------*/

#include "score.h"
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include<string.h>
#include<Windows.h>
#define _CRT_SECURE_NO_WARNINGS��

/*----------------��������-------------*/


//    ��ȡѧ����Ϣ
SS* ReadDataFromFile(int *N)
{
	printf("\n\n------------Step1�����ļ��ж�ȡѧ����Ϣ---------------\n\n");

	SS *stu;                   //      �ṹ����ָ�����stu
		FILE *fp = NULL;
		int stunum = 0;
		int index = 0;
		fp = fopen("data.txt", "r");             //      ��ѧ�����ݶ���
		if (fp == NULL){
			printf("Failed to open the file!!!\n");
			getchar();
		}
		else{
			fscanf(fp, "%d", &stunum);
			*N = stunum;
		}
		printf("ѧ����ĿΪ��%d\n", stunum);
		Sleep(1000);

		  //      Ϊ����ѧ������Ϣ����洢�ռ�
		stu = (SS*)malloc(stunum*sizeof(SS));

		  //      ��ȡѧ����Ϣ
		while ((!feof(fp)) && (index < stunum))
		{
			fscanf(fp,"%s %s %f%f%f\n", stu[index].num, stu[index].name, &stu[index].dailyscore, &stu[index].expscore, &stu[index].finalscore);   
			printf(" ѧ�ţ�%s	����:%s		ƽʱ�ɼ���%4.2f��		ʵ��ɼ�:%4.2f��		��ĩ�ɼ�:%4.2f��\n", stu[index].num, stu[index].name, stu[index].dailyscore, stu[index].expscore, stu[index].finalscore);
			index++;

		}
		fclose(fp);
		return stu;


}


//    ���������ɼ�
void Calcugeneralscore(SS stu[], int N)
{
	printf("\n\n-------------Step2: ����ÿ��ѧ���������ɼ�-----------\n\n");
	
	for (int i = 0; i < N; i++)
	{
		stu[i].generalscore = 0.2*stu[i].dailyscore + 0.2*stu[i].expscore + 0.6*stu[i].finalscore;
		printf(" %s			�ܳɼ�:%4.2f��\n", stu[i].num, stu[i].generalscore);

	}

}

int cmpBigtoSmall(const void *a, const void *b)
{

	SS *aa = (SS *)(a);
	SS *bb = (SS *)(b);



	if ((*aa).generalscore < (*bb).generalscore)  return 1;

	else if ((*aa).generalscore >(*bb).generalscore)  return -1;

	else
		return 0;

}

void SortScore(SS stu[], int N)
{

	qsort(&(stu[0]), N, sizeof(stu[0]), cmpBigtoSmall);

}

void PrintOrderOut(SS stu[], int N)
{
	printf("\n\n------Step3: �����ܳɼ����ѧ��������Ϣ!------\n\n");

	for (int i = 0; i < N; i++)
	{
		printf("��%d�� %s        ѧ�� %s		�ܳɼ�:%4.2f��\n", i + 1, &(stu[i].name[0]),  &(stu[i].num[0]),  stu[i].generalscore);
	}
}

void Ave_Variance(SS stu[], int N)
{
	printf("\n\n-------Step4�� ͳ�Ƹÿγ̳ɼ��ľ�ֵ�ͷ���--------\n\n");
	float ave;   //     �����ɼ���ƽ��ֵ
	ave = 0.2*(stu[0].generalscore + stu[1].generalscore + stu[2].generalscore + stu[3].generalscore + stu[4].generalscore);
	float var;    //      ���巽��
	var = 0.2*(pow(stu[0].generalscore - ave, 2) + pow(stu[1].generalscore - ave, 2) + pow(stu[2].generalscore - ave, 2) + pow(stu[3].generalscore - ave, 2) + pow(stu[4].generalscore - ave, 2));
	printf("�ܳɼ�ƽ��ֵΪ��%4.2f���ܳɼ�����Ϊ��%4.2f\n", ave, var);
}


//     ��ѰҪ���ҵ�ѧ������Ϣ

void SearchScore(SS stu[])
{
	printf("\n\n-------Step5�� ��ѯĳλѧ����Ϣ----------\n\n");
	char number[10];
	int flag = 1;
	printf("������ѧ�ţ�\n");

	for (int j = 0; j < 10; j++)
	{
		scanf("%c", &number[j]);   //���ν�ѧ�ŵ�ÿһ�����ָ�������
	}
	getchar();

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (stu[i].num[j] != number[j])
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			printf(" %s	ƽʱ�ɼ���%4.2f��	ʵ��ɼ���%4.2f��	��ĩ�ɼ�:%4.2f��    �ܳɼ�Ϊ:%4.2f��\n", (stu[i].name), stu[i].dailyscore, stu[i].expscore, stu[i].finalscore, stu[i].generalscore);
			break;

		}
		else if (i == 5){

			printf("��ѯ�޹�����\n");

		}
		flag = 1;	
	}

}
