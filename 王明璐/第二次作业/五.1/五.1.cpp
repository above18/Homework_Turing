//��C���Է��ĳ���ĳ�C++���Է���Դ����

//ԭC���Է�����������£�

/*#include <stdio.h>
int add(int a, int b);

int main()
{
	int x, y, sum;
	printf("please input x and y:\n");
	scanf("%d%d", &x, &y);
	sum = add(x, y);
	printf("%d+%d=%d\n", x, y, sum);
	return 0;
}

int add(int a, int b)
{
	return a + b;
}*/

//��ΪC++������Է��ĳ������Ϊ��

#include <iostream>
#include <Windows.h>

using namespace std;

int add(int a, int b);

int main()
{
	int x, y, sum;
	cout << "Please input x and y:" << endl;
	cin >> x >> y;
	sum = add(x, y);
	cout << x << "+" << y << "=" << sum << endl;
	system("pause");
	return 0;
}

int add(int a, int b)
{
	return a + b;
}