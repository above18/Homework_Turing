#pragma once
#include<iostream>
#include <fstream>
#include <sstream>
using namespace std;
class work
{
private:
	struct Student {
		string sid;
		string name;
		int score[3];
		double total;
		int rank;
	};
	Student stu[60];
	int cnt = 0;
public:
	void readData()
	{
		fstream readfile;
		readfile.open("data.txt");
		cout << "¼������ͬѧ" << endl;
		while (readfile.peek() != EOF)
		{
			readfile >> stu[cnt].sid;
			cout << stu[cnt].sid << endl;
			readfile >> stu[cnt].name;
			readfile >> stu[cnt].score[0];
			readfile >> stu[cnt].score[1];
			readfile >> stu[cnt].score[2];
			stu[cnt].total = 0.2*stu[cnt].score[0] +
				0.2*stu[cnt].score[1] + 0.6*stu[cnt].score[2];
			cnt++;
		}
		cout << "�ļ���ȡ�ɹ����ܳɼ�����ɹ�" << endl;
	}
	void sortScore() {
		for (int i = 0; i < cnt; i++)
		{
			stu[i].rank = 1;
			for (int j = 0; j < cnt; j++)
			{
				if (stu[i].total < stu[j].total)
				{
					stu[i].rank++;
				}
			}
			cout << stu[i].rank << endl;
		}
		cout << "������������ɹ�" << endl;
	}
	void check() {
		string str;
		cout << "���������ѯѧ��ѧ�ţ�" << endl;
		cin >> str;
		cout << "ѧ��       ����  ƽʱ�ɼ� ʵ��ɼ� ��ĩ�ɼ� �ܳɼ� ����" << endl;
		for (int i = 0; i < cnt; i++)
		{
			if (stu[i].sid == str)
			{
				cout << stu[i].sid << " " << stu[i].name << " ";
				for (int j = 0; j < 3; j++)
				{
					cout << stu[i].score[j] << "       ";
				}
				cout << stu[i].total << "   ";
				cout << stu[i].rank << endl;
			}
		}
	}
	void var() {
		double ar = 0;
		for (int i = 0; i < cnt; i++)
		{
			ar += stu[i].total;
		}
		ar /= cnt;
		cout << "����ɼ���ֵ: " << ar << endl;
		double var = 0;
		for (int i = 0; i < cnt; i++)
		{
			var += (stu[i].total - ar)*(stu[i].total - ar);
		}
		var /= cnt;
		cout << "����ɼ�����: " << var << endl;
		system("pause");
	}
	
}; 
