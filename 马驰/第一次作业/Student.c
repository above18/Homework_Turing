#include <stdio.h>

 typedef struct{
	long num;
	char name[10];
	float dailyScore;
	float finalScore;
	float generalScore;
}Student;
void readData(Student stu[], int n){
	printf("������ѧ����Ϣ��\n")
	for(int i = 0; i<n; i++ ){
		scanf("%d %s %f %f", &stu[i].num, &stu[i].name, &stu[i].dailyScore, &stu[i].finalScore);
		printf("\n");
	}
	printf("��Ϣ¼�����");
}
void calcuScore(Student stu[], int n){
	for(int i = 0; i<n; i++){
		stu[i].generalScore = stu[i].dailyScore*0.2 + stu[i].finalScore*0.8;
	}
} 
void sortScore(Student stu[], int n){
	for(int i = 0; i<n-1; i++){
		for(int j = 0; j=n-i-1; j++){
			if(stu[j].generalScore > stu[j+1].generalScore){
				Student stu01;
				stu01 = stu[j]];
				stu[j] = stu[j+1];
				stu[j+1] = stu01;
			}
		}
	}
}
void printOut(Student stu[], int n){
	for(int i = 0; i<n; i++){
		printf("������ѧ��Ϊ%d,����Ϊ%s,�ܳɼ�Ϊ%f������Ϊ%d", stu[i].num, stu[i].name, stu[i].generalScore, i+1);
	}
	printf("�������");
}
int main(){
	int n = 0;
	printf("������ѧ��������\n");
	scanf("%d", n);
	struct Student stu[n];
	readData(stu, n);
	calcuScore(stu, n);
	sortScore(stu, n);
	printOut(stu, n);
	return 0; 
}
