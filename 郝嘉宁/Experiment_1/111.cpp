#include "first homework.h"
#include <math.h>
#include <stdlib.h>
#include <stdio.h>


/*----------------��������-------------*/

//1.��ȡѧ����������

SS* readDataFromFile(int *N)
{

	printf("\n\n-----ѧ���ĳɼ���Ϣ��--------\n\n");

	SS *stu;// �����¿ռ�,��ȡ�ļ��е�ÿ��ѧ����Ϣ

	FILE *fp = NULL;
	int count = 0;
	int index = 0;

	fp = fopen("data.txt", "r");

	//1.��ȡѧ����Ŀ
	if (fp != NULL)
	{
		fscanf(fp, "%d", &count);
		*N = count;
	}
	else
	{
		printf("failed to open the info file\n");
		getchar();
	}

	printf("ѧ����ĿΪ:%d\n", count);

	//2.������ѧ������洢�ռ�
	stu = (SS*)malloc(count * sizeof(SS));

	//3.��ȡÿ��ѧ������Ϣ
	while ((!feof(fp)) && (index < count))
	{

		//�����ļ����ݵ��ڴ�
		fscanf(fp, "%s%s %f%f%f\n", (stu[index].number), (stu[index].name), &stu[index].dailyScore,&stu[index].expScore, &stu[index].finalScore);

		//���ԭʼѧ����Ϣ
		printf("* %s	ƽʱ�ɼ���%4.2f��	ʵ��ɼ���%4.2f��	��ĩ�ɼ�:%4.2f��\n", (stu[index].number), stu[index].dailyScore, stu[index].expScore, stu[index].finalScore);

		index++;
	}

	fclose(fp);

	return stu;
}

//2.����N��ѧ�����Ե������ɼ�
void calcuScore(SS stu[], int N)
{


//	printf("\n\n------�ڶ���: ����ÿ��ѧ���������ɼ�--------\n\n");

	for (int i = 0; i < N; i++)
	{
		//�ܳɼ�=0.2\*ƽʱ�ɼ�+0.2\*ʵ��ɼ�+0.6\*��ĩ�ɼ�
		stu[i].generalScore = 0.2*stu[i].dailyScore + 0.2*stu[i].expScore + 0.6*stu[i].finalScore;
		//printf("* %s			�ܳɼ�:%4.2f��\n", (stu[i].number),  stu[i].generalScore);

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


	printf("\n------ѧ���ܳɼ�����------\n\n");

	for (int i = 0; i < N; i++)
	{
		stu[i].rank = i+1;
		printf("��%d��   %s			�ܳɼ�:%4.2f��\n", i + 1, &(stu[i].number[0]),  stu[i].generalScore);
	}


}

/*-6.����ɼ��ľ�ֵ�ͷ���*/
void Ave_Variance(SS stu[],int N)
{
	float ave;
	ave = 0.1667*(stu[0].generalScore + stu[1].generalScore + stu[2].generalScore + stu[3].generalScore + stu[4].generalScore + stu[5].generalScore);
	float variance;
	variance = 0.1667*(pow(stu[0].generalScore - ave, 2) + pow(stu[1].generalScore - ave, 2) + pow(stu[2].generalScore - ave, 2) + pow(stu[3].generalScore - ave, 2) + pow(stu[4].generalScore - ave, 2)+ pow(stu[5].generalScore - ave, 2));

	printf("�ܳɼ�ƽ��ֵΪ��%4.2f���ܳɼ�����Ϊ��%4.2f\n", ave,variance);



}

/*-7.����ѧ�Ų�ɼ�*/
void searchScore(SS stu[])
{
	printf("\n------����ѧ�Ų�ѯ�ɼ�------\n\n");
	char number[10];
	printf("������ѧ�ţ�\n");
	//printf("%c", stu[0].number[0]);

	for (int j = 0; j < 10; j++)
	{
		scanf("%c", &number[j]);
	}
	getchar();

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (number[j] == stu[i].number[j])
			{
				if (j == 9)
				{
					printf("* %s	ƽʱ�ɼ���%4.2f��	ʵ��ɼ���%4.2f��	��ĩ�ɼ�:%4.2f��    �ܳɼ�:%4.2f��    ����:%d\n", (stu[i].number), stu[i].dailyScore, stu[i].expScore, stu[i].finalScore, stu[i].generalScore,stu[i].rank);

				}
			}

		}
	}

}
