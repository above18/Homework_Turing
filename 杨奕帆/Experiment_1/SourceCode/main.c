#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include"score.h"
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS��


/*----------------------------------*
			Main Function
*-----------------------------------*/

int main()
{
	printf("\b******************************\n");
	printf("       ѧ���ɼ��������ϵͳ        \n");
	printf("           ���ȷ�����           \n");
	printf("\b******************************\n\n");

	int N = 0;       

	SS  *stu = NULL;    //  �ṹ������ָ��

	stu = ReadDataFromFile(&N);
	Sleep(500);

	/*�����ܳɼ�*/
	Calcugeneralscore(stu, N);
	Sleep(500);

	/*���ݳɼ�����*/
	SortScore(stu, N);

	/*�����������ѧ����Ϣ*/
	PrintOrderOut(stu, N);
	Sleep(500);


	/*����ɼ��ľ�ֵ�ͷ���*/
	Ave_Variance(stu, N);
	Sleep(500);

   /*��ѯĳ��ѧ���ɼ���Ϣ*/
	SearchScore(stu);
	free(stu);

	printf("\n");
	system("pause");
}