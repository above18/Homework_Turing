#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "first homework.h"


int main()
{


	printf("------------------------------\n");
	printf("       ѧ���ɼ��������ϵͳ        \n");
	printf("------------------------------\n\n");


	/*-1.������ʼ��-*/
	int N = 0;        //ѧ������

	SS  *pstu = NULL;    //�ṹ������ָ��


	//2.ѡ��һ�ֶ�ȡѧ����Ϣ�ķ���(�ֶ����뷨,���ߴ��ļ���ȡ���ڴ�)
	//2.1 ��ȡ�ļ���

	pstu = readDataFromFile(&N);


	/*2.2�ֶ�����ѧ����Ϣ��-*/
	//printf("������ѧ����Ŀ:");
	//scanf("%d", &N);
	//readData(pstu, N);


	/*-3.����ѧ���ܳɼ����ܳɼ� = ƽʱ�ɼ� + ��ĩ�ɼ�--*/
	calcuScore(pstu, N);

	/*-4.����ѧ���ɼ�����-*/
	sortScore(pstu, N);

	/*-5.�����������ѧ����Ϣ-*/
	printOut(pstu, N);

	/*-6.����ɼ��ľ�ֵ�ͷ���*/
	Ave_Variance(pstu, N);

	/*-7.����ѧ�Ų�ɼ�*/

	searchScore(pstu);


	free(pstu);//�ͷŶ�̬�ڴ�ռ�

	printf("\n");
	system("pause");


	return 0;
}
