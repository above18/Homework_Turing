#include "stdio.h"
 struct student
{
	int number;
	char name[10];
	int score;
   int finalscore;

};

	




	



void main()

{
	 struct student stu[6]={ {20171100,"zhang",84,96},{20171101,"wang",78,86},{20171102,"zhao",80,86},{20171103,"liu",69,75},{20171104,"TomHanks",85,90},{20171105,"Jeny",90,96} };
	int i, j, k;
	printf("��ĩ�ɼ�����Ϊ��\n");
	 struct student t;
	for (i = 0; i < 6; i++)
	{
		k = i;
		for (j = i + 1; j < 6; j++)
			if (stu[j].finalscore > stu[k].finalscore)
				k = j;
		t = stu[k]; stu[k] = stu[i]; stu[i] = t;
	}
int zzscore[6];
       for(i=0;i<6;i++)
         {
                
               zzscore[i]=stu[i].score*0.2+stu[i].finalscore*0.8;
              
                       
           }
      printf("ѧ�ţ�        ������           ��ĩ�ɼ���          �ۺϳɼ���\n");
	for (i = 0; i < 6; i++)
		printf("%d      ,%s      ,%d      ,%d       \n", stu[i].number,stu[i].name,stu[i].finalscore,zzscore[i]);
	printf("\n");

	int p;
	printf("������ѧ�Ų�ѯ�ɼ���");
	scanf("%d", &p);
	printf("%d\n", stu[p-20171100].finalscore);
	


   
}





