#include<iostream>
using namespace std;
#include<Windows.h>

int add(int a, int b)
{
	return a + b;
}

int main()
{
	int x, y, sum;
	cout << "������x��y��ֵ��\n"<<endl;
	cin >> x >> y;
	sum = add(x, y);
	cout << x <<"+" <<y<<"="<<sum<< '\n'<<endl;
	system("pause");
	return 0;
}