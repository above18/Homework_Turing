//****** ��һ����ҵ  ******//
/*����һ���򵥵ĳɼ�����ϵͳ*/
#include<iostream>
#include<cstdio>
#include<cmath>
#include<fstream>
#include"score_administration.h"
#include<Windows.h>


using namespace std;

int main()
{
	string filename;
	filename = "data.txt";  //�ļ�·��
	read_txt(filename);												//���ļ���ȡ���ṹ������

	
	calculate_all_students_final_score();    //��������ѧ�������ճɼ�...
	all_students_rank();  //������ѧ����������
	printf("����0 ���Ƴ��ɼ�����ϵͳ\n����1 ��ȫ���ɼ�Ԥ��\n����2 ���鿴�����ֵ/������ɼ�����\n����3 ����ѧ�Ų�ѯѧ����Ϣ\n");

	while (1) {
		printf("\n��������ָ�\n\n");
		int n = 0;
		cin >> n;
		if (n == 0) break;
		switch (n)
		{

		case 1:{
			information_view();  //�ɼ�Ԥ��
			break;
		}

		case 2:{
			calculate_mean_variance_and_analyze();   //�����ֵ�ͷ����������...
			break;
		}

		case 3: {
			string n_2;
			while (1) {
				printf("���� 000 ��������ѯ\n����ѧ�Ž��в���\n");
				cin >> n_2;
				if (n_2 == string("000")) break;
				else {
					search_student(n_2);
				}
			}
			break;
		}
		default: printf("�������ָ����Ч������������ : \n");
		}
	}
	
	printf("лл����ʹ��\n\n");
	system("pause");
	return 0;
}

