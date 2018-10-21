/*************************************************
* Head File   : SCORE.h
* File Usage  : ѧ������ϵͳͷ�ļ�
* Create Time : 2018-9-2/17:25
/**************************************************/

#ifndef __SCORE_H__
#define __SCORE_H__
 #define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>

/*----------------------------------*
    Function Declaration
*-----------------------------------*/

typedef struct //ѧ�� ���� ƽʱ�ɼ� ʵ��ɼ� ��ĩ�ɼ�
{
	char number[10];  //ѧ��
	char name[10];    //����
	float dailyScore;   //ƽʱ�ɼ�
	float expScore;  //ʵ��ɼ�
	float finalScore;   //��ĩ�ɼ�
	float generalScore; //�����ɼ�
	int rank;   //�ܳɼ�����
	
}SS;


/*---------------��������-------------------*/

//1.��ȡѧ����������

SS* readDataFromFile(int *N);

//2.����N��ѧ���������ɼ�
void calcuScore(SS stu[], int N);

//3.���������ɼ�����
void sortScore(SS stu[], int N);

//4.����һ���ĸ�ʽ���N��ѧ����������Ϣ
void printOut(SS stu[], int N);


#endif

