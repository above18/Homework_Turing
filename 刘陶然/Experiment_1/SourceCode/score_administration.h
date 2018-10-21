#include<iostream>
#include<cstdio>
#include<fstream>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int num;  //ѧ������

struct node_info
{
	char StudentID[20];    //ѧ��
	char Name[20];         //����
	int common_score;      //ƽʱ�ɼ�
	int experiment_score;  //ʵ��ɼ�
	int final_score;	   //��ĩ�ɼ�
	double score;		   //���ճɼ�
	int rank;			   //����
}Student[100];


int str_int(string str) {								//���ַ�������ת������������
	int str_num = str.length();
	int sum = 0;
	for (int i = 0; i < str_num; i++) {
		sum *= 10;
		sum += str[i] - '0';
	}
	return sum;
}


void read_txt(string filename)
{
	string temp;
	ifstream readFile;
	readFile.open(filename);
	if (!readFile) {							//�ж��ļ��Ƿ����������
		cout << "Cannot open the file\n" << endl;
		return;
	}
	//С֪ʶ �� ������������򿪣���getline(str, 100, 0) ��������ո�����delim���ŲŽ�ֹ�� ���һ������0��ʾ�ı����������ַ���ASCLL��Ϊ32���ı��򲻿����п��ַ�����ֹ�������ӵ���������0ʱ����ʾ'\n'Ϊ��ֹ��('\n'Ҳ�ǻ��з�)��
	getline(readFile, temp);
	num = temp[0] - '0';						//��ȡ��һ�У�����
	for (int i = 1; i <= num; i++){ 				//��ѧ����Ϣ���뵽�ṹ������
		for (int j = 1; j <= 5; j++) { 
			if (j == 1) readFile >> Student[i].StudentID;
			if (j == 2) readFile >> Student[i].Name;
			if (j == 3) {
				readFile >> temp;
				Student[i].common_score = str_int(temp);
			}
			if (j == 4) {
				readFile >> temp;
				Student[i].experiment_score = str_int(temp);
			}
			if (j == 5) {
				readFile >> temp;
				Student[i].final_score = str_int(temp);
			}
		}
	}
	readFile.close();  //�ر��ļ�
}


void information_view()  //�ɼ�Ԥ�����Ԥ��
{
	cout << "������ �� " << num << endl;
	cout << "        ѧ��          ����        ƽʱ�ɼ�     ʵ��ɼ�     ��ĩ�ɼ�      ���ճɼ�       ����" << endl;
	for (int i = 1; i <= num; i++) {
		printf("%15s, %10s, %10d, %10d, %10d, %13.2f, %10d\n", Student[i].StudentID, Student[i].Name, Student[i].common_score, Student[i].experiment_score, Student[i].final_score, Student[i].score, Student[i].rank);
		//cout << Student[i].StudentID << "     " << Student[i].Name << "     " << Student[i].common_score << "            " << Student[i].experiment_score << "           " << Student[i].final_score << endl;
	}
}


double calculate_final_score(node_info S)  //����ÿ��ѧ�����ܳɼ�
{
	double calculate_score = 0;
	calculate_score += S.common_score * 0.2 + S.experiment_score * 0.2 + S.final_score * 0.6;
	return calculate_score;
}


void calculate_all_students_final_score() //��������ѧ�������ճɼ�
{
	for (int i = 1; i <= num; i++) {
		Student[i].score = calculate_final_score(Student[i]);
	}
}


void calculate_mean_variance_and_analyze() //�����ֵ�ͷ����������
{
	printf("\n\n		****** ����ѧ���ĳɼ��ֲ���� ******\n\n");
	double common_score_mean = 0, common_score_variance = 0;			 //ƽʱ�ɼ�  ��ֵ/����
	double experiment_score_mean = 0, experiment_score_variance = 0;	 //ʵ��ɼ�  ��ֵ/����
	double final_score_mean = 0, final_score_variance = 0;				 //��ĩ�ɼ�  ��ֵ/����
	double score_mean = 0, score_variance = 0;						 //���ճɼ�  ��ֵ/����
	double sum = 0;
	for (int i = 1; i <= 4; i++) {   //  | i == 1 ʱ ����ƽʱ�ɼ�  ��ֵ/����  | i == 2ʱ  ����ʵ��ɼ�  ��ֵ/���� | ... �������� 
		for (int j = 1; j <= num; j++) {
			if (i == 1) sum += Student[j].common_score;  //�����ܺ�
			if (i == 2) sum += Student[j].experiment_score;
			if (i == 3) sum += Student[j].final_score;
			if (i == 4) sum += Student[j].score;
		}

		if (i == 1) {
			common_score_mean = sum / (1.0 * num);  //�����ֵ
			for (int j = 1; j <= num; j++) {
				common_score_variance += pow( fabs ( Student[j].common_score - common_score_mean), 2);  //���㷽��
			}
			common_score_variance /= (1.0 * num);
		}

		if (i == 2) {
			experiment_score_mean = sum / (1.0 * num);
			for (int j = 1; j <= num; j++) {
				experiment_score_variance += pow(fabs(Student[j].common_score - experiment_score_mean), 2);
			}
			experiment_score_variance /= (1.0 * num);
		}

		if (i == 3) {
			final_score_mean = sum / (1.0 * num);
			for (int j = 1; j <= num; j++) {
				final_score_variance += pow(fabs(Student[j].common_score - final_score_mean), 2);
			}
			final_score_variance /= (1.0 * num);
		}

		if (i == 4) {
			score_mean = sum / (1.0 * num);
			for (int j = 1; j <= num; j++) {
				score_variance += pow(fabs(Student[j].common_score - score_mean), 2);
			}
			score_variance /= (1.0 * num);
		}
		sum = 0; //�ٳ�ʼ��Ϊ0��
	}

	cout << "      ƽʱ�ɼ�      ʵ��ɼ�     ��ĩ�ɼ�     ���ճɼ�" << endl;
	printf("��ֵ��%10.2f %10.2f %10.2f %10.2f\n", common_score_mean, experiment_score_mean, final_score_mean, score_mean);
	printf("���%10.2f %10.2f %10.2f %10.2f\n\n\n", common_score_variance, experiment_score_variance, final_score_variance, score_variance);
	//cout << "��ֵ:   " << common_score_mean << "        " << experiment_score_mean << "      " << final_score_mean << "     " << score_mean << endl;
	//cout << "����:   " << common_score_variance << "      " << experiment_score_variance << "     " << final_score_variance << "      " << score_variance << endl;
	//			 ƽʱ�ɼ�      ʵ��ɼ�     ��ĩ�ɼ�     ���ճɼ�
	//	��ֵ��     86.50       83.67          92.83      89.73
	//	���     30.92       38.94          71.03      41.37

	/* ********************************************************************************************** */
	//�����ɼ���
	string str;
	ifstream readFile_2;			 //����һ�����ļ�����
	readFile_2.open("analyse.txt");  //����Ҫ�������ļ�
	readFile_2 >> str;				 //��ȡ�������
	readFile_2.close();				 //�ر��ļ�

	//string str = "\n������ƽʱ�ɼ���ʵ��ɼ��Ƚ��ȶ�������ĩ�ɼ��ƽ�ȣ����Կ�����ĩ�ɼ����ܷ�Ӧƽʱ��Ŭ���̶ȣ��������ֶȡ�\n      ��Ӧ����ĩ�ɼ��ľ�ֵ�ܸ߶�����ȴ�ܴ�˵���ɼ��������ֻ��Ƚ�����"; //���з���
	
	int n = 0;
	printf("����0�鿴���з��������\n����1�޸ķ���\n");
	cin >> n;
	if (n == 0) cout << str << endl;
	else {
		ofstream writeFile_2;   //����һ��д�ļ�����
		writeFile_2.open("analyse.txt"); //����Ҫд����ļ�
		printf("���޸ķ��������\n");
		cin >> str;  
		writeFile_2 << str;       //��str������д��ȥ
		printf("\n�޸ĳɹ�\n");   
		writeFile_2.close();     //�ر��ļ�
	}
}


int cmp(node_info A, node_info B)  //������������
{
	if (A.score >= B.score) return 1;
	return 0;
}


void all_students_rank()  //������ѧ����������
{
	sort(Student + 1, Student + 1 + num, cmp);
	for (int i = 1; i <= num; i++) {
		Student[i].rank = i;
	}
}


void search_student(string str) //��ѧ�Ų���ͬѧ
{
	int flag = 0;
	for (int i = 1; i <= num; i++) {
		if (Student[i].StudentID == str) {
			cout << "        ѧ��          ����        ƽʱ�ɼ�     ʵ��ɼ�     ��ĩ�ɼ�      ���ճɼ�       ����" << endl;
			printf("%15s, %10s, %10d, %10d, %10d, %13.2f, %10d\n\n\n", Student[i].StudentID, Student[i].Name, Student[i].common_score, Student[i].experiment_score, Student[i].final_score, Student[i].score, Student[i].rank);
			flag = 1;
			break;
		}
	}
	if (flag == 0) printf("\n��ѯ������ͬѧ�����������������ѧ���������������룺\n");

}