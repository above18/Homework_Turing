#define _CRT_SECURE_NO_WARNINGS
// ͷ�ļ�
# include<stdio.h>

typedef struct
{
	char number[10];  // ѧ��
	char name[10];  // ����
	float dailyScore;  // ƽʱ�ɼ�
	float finalScore;  // ��ĩ�ɼ�
	float generalScore;  // �ܳɼ�
}Stu;

/*-------------��������-----------*/

// 1��read the student's information
void readData(Stu stu[], int N);
Stu* readDataFromFile(int *N);

// 2��compute N student's generalScore
void calcuScore(Stu stu[], int N);

// 3��sort by generalScore;
void sortScore(Stu stu[], int N);

// 4��output the N student's general information
void printOut(Stu stu[], int N);

// 5��compute the mean of every subject
void computeMean(Stu stu[], int N);

// 6��compute the variance of every subject
void computeVariance(Stu stu[], int N);

