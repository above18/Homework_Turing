#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
struct SS//�ýṹ��
{
	string sid;//ѧ��
	string name;
	int total;//�ܷ�
	int score[5];//���Ƴɼ�
	int rank;//����
}student[30], temp;
int main()
{
	int i, j;
	ifstream import1("allscore.txt")//����������԰��ļ�������ṹ��
		for (i = 0;i < 30;i++)
		{
			import1 >>
				student[i].sid >>
				student[i].name >>
				student[i].score[0] >>
				student[i].score[1] >>
				student[i].score[2] >>
				student[i].score[3] >>
				student[i].score[4];
		}
	import1.close();//���ļ�����Ҫ�ر��ļ�
	cout << "���ڵ������ǣ�" << endl;
	for (i = 0;i < 30;i++)
	{
		cout << student[i].sid << "" <<
			student[i].name << "" <<
			student[i].score[0] << "" <<
			student[i].score[1] << "" <<
			student[i].score[2] << "" <<
			student[i].score[3] << "" <<
			student[i].score[4] << endl;
	}
	for(i=0;i<30;i++)
	{
		student[i].total = student[i].score[0] + student[i].score[1] + student[i].score[2] + student[i].score[3] + student[i].score[4];
		student[i].rank = 30;
	}
	for (i = 0; i < 30; i++)
		for (j = 0; j < 30; j++)
		{
			if (student[i].total > student[j].total)
				student[i].rank--;
		}//���������ַ�������Ϊ�Լ��ķ���
	for (i = 0;i < 30;i++)
		for (j = 0; j < 30; j++)
		{
			if (student[i].sid < student[j].sid)
			{
				temp = student[j];
				student[j] = student[i];
				student[i] = temp;
			}
		}
	cout << "Now,the data is:" << endl;
	for (i = 0; i < 30; i++)
	{
		cout << student[i].sid << " " << student[i].name << " " << student[i].score[0] << " " << student[i].score[1] << " " << student[i].score[2] << " " << student[i].score[3] << " " << student[i].score[4] << " ";
		cout << student[i].total << " " << student[i].rank << endl;
	}
	ofstream export1("final.csv");//���������CSV��ʽ������
	for (i = 0; i < 30; i++)
	{
		export1 << student[i].sid << " " << student[i].name << " " << student[i].score[0] << " " << student[i].score[1] << " " << student[i].score[2] << " " << student[i].score[3] << " " << student[i].score[4] << " ";
		export1 << student[i].total << " " << student[i].rank << endl;
	}
	export1.close();
	getchar();
	return 0;
}
 }




}