#include <stdio.h>
#include <stdlib.h>
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
int main()
{
	printf("******************************\n");
	printf("       ѧ���ɼ��������ϵͳ        \n");
	printf("******************************\n\n");
	int N=0;
	Student *stu=NULL;
	stu=readDataFromFile(&N);
	count_s(stu,N);
	sort_sstu,N);
	pr(stu,N);
	ave_fangcha(stu,N);
	free(stu);
	printf("\n");
	system("pause");
        return 0;
}