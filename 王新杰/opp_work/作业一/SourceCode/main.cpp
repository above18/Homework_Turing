
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "score.h"



int main()
{
	int N = 0;        //ѧ������
	SS  *pstu = NULL;    //�ṹ������ָ��
	 //��ȡ������Ϣ
	
	int choice;
	while (1)
	{
                           /*���˵�*/

		printf("\n\n******************************\n");
		printf("       ѧ���ɼ��������ϵͳ        \n");
		printf("******************************\n\n");

		printf("1.���ļ�data.txt�ж�ȡ����ѧ���ɼ���Ϣ\n");

		printf("2.����ѧ���ɼ���Ϣ�����ѧ���ɼ�����\n");

		printf("3.����ѧ�ſɲ�ѯĳ��ѧ���ĳɼ���Ϣ\n");

		printf("4.ͳ�Ƴ��ÿγ̳ɼ��ľ�ֵ�ͷ�����Գɼ��ֲ���Ҫ����\n");

		printf("5.�˳�\n");

		printf("��ѡ��(1-5):");

		scanf_s("%d", &choice);

		getchar();

		switch (choice)

		{

		case 1:

			pstu = readDataFromFile(&N);

			break;

		case 2:
			calcuScore(pstu, N);
			sortScore(pstu, N);
			printOut(pstu, N);
			break;

		case 3:

			searchScore(pstu);

			break;

		case 4:
			average(pstu, N);
			variance(pstu, N);
			

			break;


		case 5:

			exit(0);

			break;

		}

		

	}




	free(pstu);//�ͷŶ�̬�ڴ�ռ�

	printf("\n");
	system("pause");


	return 0;
}