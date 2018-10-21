/*----------------ͷ�ļ�--------------*/

#include "score.h"
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

/*---------------��������-------------*/




//1.��ȡѧ����������


SS* readDataFromFile(int *N)
{

	printf("\n\n          ------ ѧ���ĳɼ���Ϣ --------\n\n");

	SS *stu;// �����¿ռ�,��ȡ�ļ��е�ÿ��ѧ����Ϣ

	FILE *fp = NULL;
	int count = 0;
	int index = 0;

	errno_t nFileOpen = fopen_s(&fp,"data.txt", "r");

	//1.��ȡѧ����Ŀ
	if (fp != NULL)
	{
		fscanf_s(fp, "%d", &count);
		*N = count;
	}
	else
	{
		printf("failed to open the info file\n");
		getchar();
	}

	printf("ѧ����ĿΪ:%d\n", count);
	getchar();


	//2.������ѧ������洢�ռ�
	stu = (SS*)malloc(count * sizeof(SS));
	
	
	//3.��ȡÿ��ѧ������Ϣ
	while ((!feof(fp)) && (index < count))
	{
		//�����ļ����ݵ��ڴ�	
		fscanf(fp, "%s %s %f%f%f\n", stu[index].number, stu[index].name, &stu[index].dailyScore, &stu[index].expScore, &stu[index].finalScore);
		//���ԭʼѧ����Ϣ
		printf("ѧ��%s	ƽʱ�ɼ���%4.2f��	ʵ��ɼ���%4.2f��	��ĩ�ɼ�:%4.2f��\n", stu[index].number, stu[index].dailyScore, stu[index].expScore, stu[index].finalScore);


		index++;
	}

	fclose(fp);

	return stu;
}

//2.����N��ѧ�����Ե������ɼ�
void calcuScore(SS stu[], int N)
{


	printf("\n\n          ------����ÿ��ѧ���������ɼ�--------\n\n");

	for (int i = 0; i < N; i++)
	{

		stu[i].generalScore = 0.2*stu[i].dailyScore + 0.2*stu[i].expScore + 0.6*stu[i].finalScore;
		printf("* ѧ�ţ�%s	����:%s		�ܳɼ�:%4.2f��\n", (stu[i].number), (stu[i].name), stu[i].generalScore);

	}

}


//3.���������ɼ�����
int cmpBigtoSmall(const void *a, const void *b)
{

	SS *aa = (SS *)(a);
	SS *bb = (SS *)(b);



	if ((*aa).generalScore < (*bb).generalScore)  return 1;

	else if ((*aa).generalScore > (*bb).generalScore)  return -1;

	else
		return 0;

}

void sortScore(SS stu[], int N)
{

	qsort(&(stu[0]), N, sizeof(stu[0]), cmpBigtoSmall);

}


//4.����һ���ĸ�ʽ���N��ѧ������Ϣ
void printOut(SS stu[], int N)
{


	printf("\n          ------ �����ܳɼ����ѧ��������Ϣ------\n\n");

	for (int i = 0; i < N; i++)
	{

		printf("NO.%d ѧ�ţ�%s	����:%s		�ܳɼ�:%4.2f��\n", i + 1, &(stu[i].number[0]), &(stu[i].name[0]), stu[i].generalScore);
	}


}

//5.��ѯ
void searchScore(SS stu[])
{
	printf("\n------����ѧ�Ų�ѯ�ɼ�------\n\n");
	char number[10];
	printf("������ѧ�ţ�\n");
	//printf("%c", stu[0].number[0]);

	for (int j = 0; j < 6; j++)
	{
		scanf_s("%c", &number[j]);
	}
	getchar();

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (number[j] == stu[i].number[j])
			{
				if (j == 5)
				{
					printf("* %s	ƽʱ�ɼ���%4.2f��	ʵ��ɼ���%4.2f��	��ĩ�ɼ�:%4.2f��    �ܳɼ�:%4.2f��    ", (stu[i].number), stu[i].dailyScore, stu[i].expScore, stu[i].finalScore, stu[i].generalScore);

				}
			}

		}
	}

}

//�����ֵ
void average(SS stu[], int N)
{
	float sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum = sum + stu[i].generalScore;
	}
	float aver;
	aver = sum / N;
	printf("------��ֵΪ��%4.2f\n", aver);
}
//7.���㷽��
void variance(SS stu[], int N)
{
	float sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum = sum + stu[i].generalScore;
	}
	float ave;
	ave = sum / N;
	float var;

	var = 0.1667*(pow(stu[0].generalScore - ave, 2) + pow(stu[1].generalScore - ave, 2) + pow(stu[2].generalScore - ave, 2) + pow(stu[3].generalScore - ave, 2) + pow(stu[4].generalScore - ave, 2) + pow(stu[5].generalScore - ave, 2));
	printf("------����Ϊ��%4.2f\n\n", var);
	
}
