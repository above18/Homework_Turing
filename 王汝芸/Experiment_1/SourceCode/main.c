/*************************************************
** ���� : ѧ���ɼ�����ϵͳ
** ���� : Qingke Zhang/tsingke@sdnu.edu.cn
** �汾 : 2018-9-2 / 17:13
** ��Ȩ : GNU General Public License(GNU GPL)
/**************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "score.h"




int main()
{
	printf("------------------------------\n");
	printf("       ѧ���ɼ��������ϵͳ        \n");
	printf("------------------------------\n\n");


	/*-1.������ʼ��-*/
	int N = 0;        //ѧ������

	SS  *pstu = NULL;    //�ṹ������ָ��

	pstu = readDataFromFile(&N);

	/*-3.����ѧ���ܳɼ�-*/
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