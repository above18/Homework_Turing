/*************************************************
* Head File   : score.h
* File Usage  : ѧ������ϵͳͷ�ļ�
* Create Time : 2018-9-21/17:25
/**************************************************/

#ifndef __SCORE_H__
#define __SCORE_H__
#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

/*----------------------------------*
		Function Declaration(��������)
*-----------------------------------*/

typedef struct
{
	char num[10];
	char name[10];
	float dailyscore;    //ƽʱ�ɼ�
	float expscore;		//ʵ��ɼ�
	float finalscore;    //��ĩ�ɼ�
	float generalscore;   //�����ɼ�

}SS;

/*--------------------Functions Declaration-------------------*/


//void ReadData(SS stu[], int N);
SS *ReadDataFromFile(int *N);

void Calcugeneralscore(SS stu[], int N);

void SortScore(SS stu[], int N);

void PrintOut(SS stu[], int N);

void Ave_Variance(SS stu[], int N);

void SearchScore(SS stu[]);



#endif