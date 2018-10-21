#include "Head.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void readData(SS std[], int N)
{
	printf("�밴�����¸�ʽ����ѧ����Ϣ��ѧ��,����,ƽʱ�ɼ�,��ĩ�ɼ�\n");
	for (int i = 0; i <= N; i++) {
		printf("��%d��ѧ��", i+1);
		scanf("%s %s %f %f", &std[i].number, &std[i].name, &std[i].dailyScore, &std[i].finalScore);
		printf("\n");
	}
	printf("�ɼ�¼�����\n");
}
SS* readDataFromFile(int *N)
{
	printf("\n��ȡ�ɼ�\n\n");
	SS *std;
	FILE *Fp = NULL;
	int count = 0;
	int index = 0;
	Fp = fopen("data.txt", "r");
	if (Fp != NULL) {
		fscanf(Fp, "%d", &count);
		*N = count;
	}
	else {
		printf("Failed!\n");
		getchar();
	}
	printf("ѧ����ĿΪ��%d\n", count);
	getchar();
	std = (SS*)malloc(count * sizeof(SS));
	while ((!feof(Fp)) && (index < count) ){
		fscanf(Fp, "%s%s%f%f\n", (std[index].number), (std[index].name), &std[index].dailyScore, &std[index].finalScore);
		printf("* ѧ�ţ�%s	����:%s		ƽʱ�ɼ���%4.2f��		��ĩ�ɼ�:%4.2f��\n", (std[index].number), (std[index].name), std[index].dailyScore, std[index].finalScore);
		index++;
	}
	fclose(Fp);
	return std;
}
void calcuScore(SS std[], int N)
{
	printf("\n����ɼ�\n\n");
	for (int i=0; i < N; i++) {
		std[i].generalScore = 0.2*std[i].dailyScore + 0.8*std[i].finalScore;
		printf("* ѧ�ţ�%s	����:%s		�ܳɼ�:%4.2f��\n", (std[i].number), (std[i].name), std[i].generalScore);
	}
}
int compare(const void *a, const void *b)
{
	SS *aa = (SS *)a;
	SS *bb = (SS *)b;
	if ((*aa).generalScore < (*bb).generalScore) return 1;
	else if ((*aa).generalScore > (*bb).generalScore) return -1;
	else return 0;
}
void sortScore(SS std[], int N)
{
	qsort(&(std[0]), N, sizeof(std[0]), compare);
}
void printOut(SS std[], int N)
{
	printf("\n����ɼ�\n\n");
	for (int i = 0; i < N; i++)
	{
		printf("��%d����Ϣ ѧ�ţ�%s	����:%s		�ܳɼ�:%4.2f��\n", i + 1, &(std[i].number[0]), &(std[i].name[0]), std[i].generalScore);
	}
}