#include<iostream>
#define max 5
using namespace std;
struct student//////////��������ṹ��
{
int xuehao; //ѧ��
char name[10]; //����
char sex; //�Ա�
int age; //����
}stu[max];
//////��������
char a; //ȫ�ֺ���a(������)
int i; //ȫ�ֺ���i(ѭ��������)
//////////�����б�
void display(); //���Ժ���
void init(); //����ṹ���ʼ������
void xuanze(); //ѡ�����������
void sys(char a); //���ݲ�����ִ�к���
void addf(); //�������ݵĺ���
void delf(); //ɾ�����ݵĺ���
void inqf(); //��ѯ���ݵĺ���
//////////////////////����
void display()
{
cout<<" ==========Welcome to Student Manager System!=========="<<endl;
cout<<endl;
cout<<" A: Add new student"<<endl;
cout<<" D: Delete a student"<<endl;
cout<<" I: Inquiry a student"<<endl;
cout<<" Q: Quit"<<endl;
cout<<endl;
xuanze();
}
/////////////////////////////��Ϣ��ʼ��
void init()
{
for(i=0;i<max;i++)
{
stu[i].name[10]='\0';
stu[i].sex='\0'; //��ʼ�����е�sexΪ'\0'
stu[i].age=0;
}
}
////////////////////////����ѡ��
void xuanze()
{
cout<<"input your choose:"<<endl;
cin>>a;
if(a=='A'||a=='D'||a=='I'||a=='Q')
sys(a); //ѡ����Ӧ�Ĳ�����ִ�к���
else
{
cout<<"Error chooseing!"<<endl;
cout<<endl;
display();
}
}
/////////////////////��Ӧ��������Ӧ����
void sys(char a)
{
switch(a)
{
case 'A':addf();
case 'D':delf();
case 'I':inqf();
case 'Q':exit(0); //�˳�
}
}
/////////////������ݵĺ���
void addf()
{
int k=0,j,g;
for(i=0;i<max;i++)
{
if(stu[i].sex=='\0')k++;
}
cout<<"ʣ�� "<<k<<" ����¼�������!"<<endl; //���ʣ��Ŀ���Ӽ�¼��Ŀ
if(k!=0)
{
cout<<"��������Ҫ��ӵļ�¼�ĸ���,���Ǽ�¼�������ܳ��� "<<k<<endl;
cin>>j;
if(j>k)
{
cout<<"Error number!"<<endl;
cout<<endl; //��ʾ������Ҫ
display();
}
else
{
for(i=0;i<j;i++)
{
for(int h=0;h<max;h++)
{
if(stu[h].sex=='\0') //�ж�sex�Ƿ�Ϊ'\0' �������ִ��д�����
{
cout<<"input the NO"<<i+1<<" 's xuehao:"<<endl;
cin>>stu[h].xuehao;
///�ж����ݷǷ����
for(g=0;g<max;g++)
{
if((stu[g].xuehao==stu[h].xuehao)&&g!=h)
{
cout<<"Duplicate number!"<<endl;
cout<<endl;
display();
}
}/////////�ж�ѧ���Ƿ���ͬ
if(stu[h].xuehao<1||stu[h].xuehao>10000)
{
cout<<"Error number!"<<endl;
cout<<endl;
display();
}
cout<<"input the NO"<<i+1<<" 's name:"<<endl;
cin>>stu[h].name;
cout<<"input the NO"<<i+1<<" 's sex:('f' for female,'m' for male)"<<endl;
cin>>stu[h].sex;
///�ж����ݷǷ����
if(stu[h].sex!='f'&&stu[h].sex!='m')
{
stu[h].sex='\0'; //�ָ�sex�ĳ�ʼֵ,�Ա��´�д�������©
cout<<"Error sex!"<<endl;
cout<<endl;
display();
}
cout<<"input the NO"<<i+1<<" 's age:(1-100)"<<endl;
cin>>stu[h].age;
///�ж����ݷǷ����
if(stu[h].age<1||stu[h].age>100)
{
stu[h].sex='\0'; //�ָ�sex�ĳ�ʼֵ,�Ա��´�д�������©
cout<<"Error age!"<<endl;
cout<<endl;
display();
}
break; //��������ѭ��
}
}
}
display(); //����
}
}
else
{
cout<<"No space to add new student!"<<endl;
cout<<endl;
display();
}
}
////////////////ɾ�����ݵĺ���
void delf()
{
int d,s=0;
cout<<"Please input the number of the student you want to delete:"<<endl;
cin>>d;
if(d<1||d>10000)
{
cout<<"Error number!"<<endl;
cout<<endl;
display();
}
else
{
for(i=0;i<max;i++)
{
if(stu[i].xuehao==d)
{
s++; //�Ƿ�ʵ��ɾ���ı�־λ
stu[i].xuehao=-1;
stu[i].name[10]='\0';
stu[i].sex='\0';
stu[i].age=0;
cout<<"Delete successfully!"<<endl;
cout<<endl;
display();
}
}
if(s==0)
{
cout<<"Not exist!"<<endl;
cout<<endl;
display();
}
}
}
/////////////��ѯ���ݵĺ���
void inqf()
{
int d,s=0;
cout<<"Please input the number of the student you want to inquiry(0 for all):"<<endl;
cin>>d;
cout<<endl;
if(d==0)
{
for(i=0;i<max;i++)
{
if(stu[i].sex!='\0')
cout<<stu[i].xuehao<<","<<stu[i].name<<","<<stu[i].sex<<","<<stu[i].age<<endl;
}
cout<<endl;
display();
}
else
{
if(d<1||d>10000)
{
cout<<"Error number!"<<endl;
cout<<endl;
display();
}
else
{
for(i=0;i<max;i++)
{
if(stu[i].xuehao==d)
{
s++; //�Ƿ���ڸ����ֵı�־
cout<<stu[i].xuehao<<","<<stu[i].name<<","<<stu[i].sex<<","<<stu[i].age<<endl;
display();
}
}
if(s==0)
{
cout<<"Not exist!"<<endl;
cout<<endl;
display();
}
}
}
}//ingf
//////////////������
void main()
{
init(); //��ʼ��
display(); //����(������)
}
