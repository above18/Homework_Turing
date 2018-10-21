#include"score.h"
#include<math.h>
#include<stdlib.h>
#include<stdio.h>


void readData(S stu[], int n)
{
	printf("������ѧ����Ϣ");
	for (int i = 0; i < n; i++)
	{
		printf("��%d��ѧ��"��i+1);
		scanf("%s %s %f %f", &stu[i], NO, dailyScore, finalScore);
		printf("\n");
	}
	printf("�ɹ�¼��ɼ�\n");
}
S* readDataFile(int *n)
{
	S *stu;
	FLIE *fp = NULL;
	int count = 0;
	int num = 0;

	fp = fopen("data.txt"."r");
	if (fp != NULL)
	{
		fscanf(fp, "%d", &count);
		*n = count;
	}
	else
	{
		printf("failed to open the info file\n")
			getchar();
	}

	printf("ѧ����ĿΪ:%d\n", count);
	getchar();


	//2.������ѧ������洢�ռ�
	stu = (S*)malloc(count * sizeof(S));


	//3.��ȡÿ��ѧ������Ϣ
	while ((!feof(fp)) && (num < count))
	{

		//�����ļ����ݵ��ڴ�	
		fscanf(fp, "%s%s%f%f\n", (stu[num].NO), (stu[num].name), &stu[num].dailyScore, &stu[num].finalScore);

		//���ԭʼѧ����Ϣ
		printf("* ѧ�ţ�%s	����:%s		ƽʱ�ɼ���%4.2f��		��ĩ�ɼ�:%4.2f��\n", (stu[num].number), (stu[num].name), stu[num].dailyScore, stu[num].finalScore);

		num++;


	}

	fclose(fp);

	return stu;
}

//2.����N��ѧ�����Ե������ɼ�
void addScore(S stu[], int n)
{


	printf("\n\n------�ڶ���: ����ÿ��ѧ���������ɼ�--------\n\n");

	for (int i = 0; i < n; i++)
	{

		stu[i].totalScore = 0.2*stu[i].dailyScore + 0.8*stu[i].finalScore;
		printf("* ѧ�ţ�%s	����:%s		�ܳɼ�:%4.2f��\n", (stu[i].number), (stu[i].name), stu[i].generalScore);

	}
}


//3.���������ɼ�����
int cmpBigtoSmall(const void *a, const void *b)
{

	SS *aa = (SS *)(a);
	SS *bb = (SS *)(b);



	if ((*aa).generalScore < (*bb).generalScore)  return 1;

	else if ((*aa).generalScore >(*bb).generalScore)  return -1;

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


	printf("\n------������: �����ܳɼ����ѧ��������Ϣ!------\n\n");

	for (int i = 0; i < N; i++)
	{

		printf("��%d����Ϣ ѧ�ţ�%s	����:%s		�ܳɼ�:%4.2f��\n", i + 1, &(stu[i].number[0]), &(stu[i].name[0]), stu[i].generalScore);
	}


}

	}
}