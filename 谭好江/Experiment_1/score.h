/*************************************************
* Head File   : SCORE.h
* File Usage  : ѧ������ϵͳͷ�ļ�
* Create Time : 2018-9-2/17:25
/**************************************************/
#define _CRT_SECURE_NO_WARNINGS
#ifndef __SCORE_H__
#define __SCORE_H__


#include <stdio.h>

/*----------------------------------*
	Function Declaration
*-----------------------------------*/

typedef struct
{
	char number[10];  //ѧ��
	char name[10];    //����
	float dailyScore;   //ƽʱ�ɼ�
	float expScore;  //ʵ��ɼ�
	float finalScore;   //��ĩ�ɼ�
	float generalScore; //�����ɼ�

}SS;


/*---------------��������-------------------*/

//1.��ȡ����
void readData(SS stu[], int N);
SS* readDataFromFile(int *N);

//2.���������ɼ�
void calcuScore(SS stu[], int N);

//3.���������ɼ�����
void sortScore(SS stu[], int N);

//4.����һ���ĸ�ʽ���N��ѧ����������Ϣ
void printOut(SS stu[], int N);

//5.����ѧ�Ų�ѯѧ����Ϣ
void searchScore(SS stu[]);

//6.����ѧ���ɼ��ľ�ֵ�ͷ���
void average(SS stu[], int N);
void variance(SS stu[], int N);
#endif