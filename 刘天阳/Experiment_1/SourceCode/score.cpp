#include "score.h"
#include<iostream>
using namespace std;

score::score()
{
}
score::~score()
{
}
SS* score::readDataFromFile(int *N)
{
	cout << "���ڶ�ȡѧ����Ϣ��" << endl;
	SS*stu;

	FILE *fp = NULL;
	int count = 0;
	int index = 0;
	fp = fopen("data.txt", "r");
	//��ȡѧ����Ŀ
	if (fp != NULL)
	{
		fscanf(fp, "%d", &count);
		*N = count;
	}
	else
	{
		cout << "���ļ�ʧ��" << endl;
		getchar();
	}
	cout << "ѧ����ĿΪ:" << count << endl;
	getchar();
	
	//������ѧ������洢�ռ�
	stu = (SS*)malloc(count *sizeof(SS));

	//��ȡÿ��ѧ������Ϣ
	while ((!feof(fp)) && (index < count))
	{
		//�����ļ����ݵ��ڴ�
		fscanf(fp, "%s%s%f%f\n", stu[index].number, stu[index].name, &stu[index].dailyScore, &stu[index].finalScore);
        index++;
	}
	for (int i = 0; i < count; i++)
	{

		stu[i].generalScore = 0.2*stu[i].dailyScore + 0.8*stu[i].finalScore;
		printf("* ѧ�ţ�%s	����:%s	  ƽʱ�ɼ�:%4.2f��   ��ĩ�ɼ�:%4.2f��   �ܳɼ�:%4.2f��\n", (stu[i].number), (stu[i].name), stu[i].dailyScore,stu[i].finalScore,stu[i].generalScore);

	}
    fclose(fp);
	return stu;
}

int cmpBigtoSmall(const void *a, const void *b)
{
	SS *aa = (SS *)(a);
	SS *bb = (SS *)(b);
	if ((*aa).generalScore < (*bb).generalScore)  return 1;
	else if ((*aa).generalScore >(*bb).generalScore)  return -1;
	else
		return 0;
}

void score::SortScore(SS stu[], int N)
{
	qsort(&(stu[0]), N, sizeof(stu[0]), cmpBigtoSmall);
	cout << "�����������������ѧ���ɼ�" << endl;
	for (int i = 0; i < N; i++)
	{
		cout << "��"<<i+1<<"����Ϣ   " << "ѧ�ţ�" <<stu[i].number << "   ����:" << stu[i].name << "   �ܳɼ� :" << stu[i].generalScore<< endl;
	}
}
void score::Search_stu(SS stu[], int N,char* search_num)
{
  for (int i = 0; i < N; i++)
	{
	  cout << stu[i].number<<endl;
     if (strcmp(stu[i].number, search_num) == 0)
	  {
		  cout << "�ɹ��ҵ���ѧ��" << endl;
		  cout << "ѧ�ţ�" << stu[i].number << "   ����:" << stu[i].name << "   ƽʱ�ɼ� :" << stu[i].dailyScore << "   ��ĩ�ɼ� :" << stu[i].finalScore << "   �ܳɼ� :" << stu[i].generalScore << endl;
		  return;
	  }
	}
	cout << "δ�ҵ���ѧ��" << endl;
}
void score::Get_mean_variance(SS stu[], int N)
{
	float mean = 0;
	float variance = 0;
	float sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum += stu[i].generalScore;
	}
	mean = sum / N;
	for (int i = 0; i < N; i++)
	{
		variance += (stu[i].generalScore - mean) *(stu[i].generalScore - mean);
	}
	variance = variance / N;
	cout << "�ܳɼ���ֵ��:" << mean << endl;
	cout << "�ܳɼ�������:" << variance << endl;
}
SS* score::Get_Data()
{
	cout << "*****ѧ���������ϵͳ*****" << endl;
	cout << "      Tianyang Liu      " << endl;
	cout << "**************************" << endl;
	cout << "��ѡ���ȡ��Ϣ����" << endl;
	cout << "1�����ļ���ȡ��Ϣ" << endl;
	cout << "2���ֶ�����������Ϣ" << endl;
	
	int i = 0;
	static int N = 0;
	SS *pstu = NULL;
    cin >> i;
	switch (i)
	{
	case 1:
		cout << "���ļ��ж�ȡѧ����Ϣ" << endl;
		pstu = readDataFromFile(&N);
		break;
	case 2:
		cout << "�ֶ�����ѧ����Ϣ,��������δ����" << endl;
		break;
	}
	return pstu;
}

int score::Show_Menu(SS stu[])
{
	cout << "************" << endl;
	cout << "���幦��" << endl;
	cout << "************" << endl;
	cout << "1������ѧ���ɼ�����" << endl;
	cout << "2������ѧ�Ų���ѧ���ɼ�" << endl;
	cout << "3������ÿγ̳ɼ��ľ�ֵ�ͷ���" << endl;
	cout << "0���˳�" << endl;
	int i = 0;
	int N = 0;
	char number[10];
	SS *readstu = NULL;
	cin >> i;
	switch (i)
	{
	case 1:
		cout << "����ѧ���ɼ�������" << endl;
		SortScore(stu,6);
		break;
	case 2:
		cout << "������ѧ��ѧ��:";
		cin >> number;
		Search_stu(stu, 6, number);
		break;
	case 3:
		cout << "����ÿγ̳ɼ��ľ�ֵ�ͷ�����" << endl;
		Get_mean_variance(stu, 6);
		break;
	case 0:
		break;
	}
	return i;
	
}
