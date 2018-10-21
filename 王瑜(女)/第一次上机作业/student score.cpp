#include <iostream>
#include<fstream>
#include<string>
using namespace std;
#define SIZE 20
struct student {
	int number;
	string name;
	int usualgrade;
	int expergrade;
	int finalgrade;
	int rank;
}student[SIZE], temp;
int main(void) {
	int n = 0;
	ifstream read("data.txt", ios::in);
	if (!read.is_open()) {
		cout << "�ļ���ʧ��" << endl;
		exit(1);
	}
	while (!read.eof() && n < SIZE) {
		read >> student[n].number >> student[n].name >> student[n].usualgrade >> student[n].expergrade >> student[n].finalgrade;
		student[n].rank = (2 * student[n].usualgrade + 2 * student[n].expergrade + 6 * student[n].finalgrade) / 10;
		n++;
	}
	int record = n - 1;
	//չʾ���������ϵ��£�
	/*for (int i = 0; i < record; ++i)
	cout << "number:" << student[i].number << " name: " << student[i].name << " ƽʱ�ɼ�: " << student[i].usualgrade << " ʵ��ɼ���" << student[i].expergrade << " ��ĩ�ɼ�: " << student[i].finalgrade << endl;
	*/
	int maxIndex;
	for (int i = 0; i < record; i++) {
		maxIndex = i;
		for (int j = i + 1; j < record; j++) {
			if (student[j].rank > student[maxIndex].rank) {     // Ѱ��������
				maxIndex = j;                 // �����������������
			}
			temp = student[maxIndex];
			student[maxIndex] = student[i];
			student[i] = temp;
		}
	}
	cout << "�ɼ�����Ϊ��" << endl;
	for (int i = 0; i < record; ++i)
		cout << "��" << i + 1 << ": " << "number:" << student[i].number << " name: " << student[i].name << " ƽʱ�ɼ�: " << student[i].usualgrade << " ʵ��ɼ���" << student[i].expergrade << " ��ĩ�ɼ�: " << student[i].finalgrade << " �ܳɼ�: " << student[i].rank << endl;
	cout << "�Ƿ�ͨ��ѧ�Ų�ѯѧ����Ϣ��y/n��" << endl;
	char flag;
	int numbs;
	cin >> flag;
	if (flag == 'y') {
		cout << "������ѧ�ţ�" << endl;
		cin >> numbs;
		//˳�����
		int l = 0;
		for (int i = 0; i < record; i++) {
			if (student[i].number == numbs) {
				cout << "number:" << student[i].number << " name: " << student[i].name << " ƽʱ�ɼ�: " << student[i].usualgrade << " ʵ��ɼ���" << student[i].expergrade << " ��ĩ�ɼ�: " << student[i].finalgrade << " �ܳɼ�: " << student[i].rank << endl;
				l++;
			}
		}
		if (l == 0)
			cout << "�����" << endl;
	}
	if (flag == 'n') {
		exit(1);
	}
	read.close();
}