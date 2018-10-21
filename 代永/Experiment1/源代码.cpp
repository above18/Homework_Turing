#include <iostream>
#include <fstream>
#include <string>
using namespace std;
#define MAX_PATH 10

typedef struct student
{
	long int sid;
	char name[MAX_PATH];
	int score[2];
	int total;
	int rank;
}st,*pst;

/*��ȡ�����ļ���ȡ����*/ 
void getdata(pst *s)
{
	int i = 0;
	string str[100] = { "0" };
	ifstream infile;
	infile.open("e:\\data.txt");
	if (!(infile.is_open())) {
		cout << "���ļ�����" << endl;
		return;
	}
	while (!infile.eof()) {
		getline(infile, str[i], '\n');
		i++;
		for (int i = 0; i < 6; i++) {
			sscanf((char*)str[i].c_str(), "%ld %s %d %d %d",&s[i]->sid, s[i]->name, &s[i]->score[0], &s[i]->score[1], &s[i]->score[2],11,4,3,3,3);		
		}
	}
	infile.close();
}

/*�ɼ�����*/ 
void sort(pst *s, int n)
{
	for (int i = 0; i < n; i++) {
		s[i]->total = (2 * s[i]->score[0] + 2 * s[i]->score[1] + 6 * s[i]->score[2]) / 10;
	}

	for (int i = 1; i < n; i++) {
		int get = s[i]->total;                
		int j = i - 1;               
		while (j >= 0 && s[j]->total> get) {
			s[j + 1] ->total= s[j]->total;          
			j--;
		}
		s[j + 1] ->total= get; 
	}
	for (int i = 0; i < 6; i++)		s[i]->rank = 6 - i;

}

/*������ʾ*/ 
void putdata(pst *s)
{
	for (int i = 5;i>-1; --i) {
		cout << "��" << 6-i << "��: " << "ѧ��:" << s[i]->sid << " ����: " << s[i]->name << " ƽʱ�ɼ�: " << s[i]->score[0]<< " ʵ��ɼ���" << s[i]->score[1] << " ��ĩ�ɼ�: " << s[i]->score[2]<< " �ܳɼ�: " << s[i]->total << endl;
	}
} 

void pindata(pst *s)
{
	int p, q;
	p = (s[0]->total + s[1]->total + s[2]->total + s[3]->total + s[4]->total + s[5]->total) / 6;
	q = (s[0]->total - p)*(s[0]->total - p) + (s[1]->total - p)*(s[1]->total - p) + (s[2]->total - p)*(s[2]->total - p) + (s[3]->total - p)*(s[3]->total - p) + (s[4]->total - p)*(s[4]->total - p) + (s[5]->total - p)*(s[5]->total - p) / 6;
	cout << "ƽ��ֵ��" << p << "���" << q << endl;
}

 /*����ʵ��*/ 
void seek(pst *s)
{
	int i = 0;
	long long d;
	//cout << "��������Ҫ���ҵ�ѧ����ѧ��:" << endl;
	cin >> d;
	for (i = 0; i < 6; i++) {
		if (s[i]->sid == d && i <6) {
			cout << "ƽʱ�ɼ�:" << s[i]->score[0] << "\nʵ��ɼ���" << s[i]->score[1] << "\n��ĩ�ɼ���" << s[i]->score[2] << "\n�ܷ֣�" << s[i]->total << "\n����" << s[i]->rank<<"\n";
			break;
		}
	}
	if (i == 6) {
		cout << "������Ϣ�������������" << '\n';
		seek(s);
		return;
	}

}

int main()
{
	pst s[6];	
	for (int i = 0; i < 6; i++)	s[i] = new(st);
	getdata(s);
	sort(s,6);
	putdata(s);
	pindata(s);
	while (true) {
		cout << "��������Ҫ���ҵ�ѧ����ѧ��:" << endl;
		seek(s);
	}
	system("pause");
	return 0;
}
