#ifndef __SCORE_H__
#define __SCORE_H__
#include <stdio.h>
typedef struct
{
	char number[10];  //ѧ��
	char name[10];  //����
	int ps;  //ƽʱ�ɼ�
	int sy;  //ʵ��ɼ�
	int qm;  //��ĩ�ɼ�
	float zp;  //���ճɼ�
	int mc;  //����
}Student;
Student* readDataFromFile(int *N);
void count_s(Student stu[],int N);
void sort_s(Student stu[],int N);
int pm(const void *a, const void *b)
void pr(Student stu[],int N);
void ave_fangcha(Student stu[],int N);
#endif