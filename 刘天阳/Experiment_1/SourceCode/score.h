#pragma once

typedef struct
{
	char number[10];  //ѧ��
	char name[10];    //����
	float dailyScore;   //ƽʱ�ɼ�
	float finalScore;   //��ĩ�ɼ�
	float generalScore; //�����ɼ�

}SS;
class score
{
	
public:
	
	score();
	~score();
	SS* readDataFromFile(int *N);
	int Show_Menu(SS stu[]);
	SS* Get_Data();
    void SortScore(SS stu[], int N);//���������ɼ�����
	void Search_stu(SS stu[],int N,char* search_num);//����ѧ�Ų���ѧ��
	void Get_mean_variance(SS stu[], int N);//���ֵ�ͷ���
};

