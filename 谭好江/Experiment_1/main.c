#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "score.h"
//#include"score.c"



int main()
{
	int N = 0;        //ѧ������
	SS  *pstu = NULL;    //�ṹ������ָ��
	//��ȡ������Ϣ

		/*���˵�*/

		printf("\n\n******************************\n");
		printf("       ѧ���ɼ��������ϵͳ        \n");
		printf("******************************\n\n");

		printf("��ȡ����ѧ����Ϣ\n");
            pstu = readDataFromFile(&N);
		
		
		printf("����ѧ���ɼ�����\n");
            calcuScore(pstu, N);
			sortScore(pstu, N);
			printOut(pstu, N);
		
			
		printf("����ѧ�Ų�ѯ�ɼ�\n");
            searchScore(pstu);
		
		printf("\nͳ�Ƴ��ÿγ̳ɼ��ľ�ֵ�ͷ���\n");
            average(pstu, N);
			variance(pstu, N);
		



	free(pstu);//�ͷŶ�̬�ڴ�ռ�

	printf("\n");
	system("pause");


	return 0;
}