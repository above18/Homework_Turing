#include<iostream>
using namespace std;

// ����һ�������ռ�one��������1������M��һ������inf
namespace one
{
	const int M = 200;
	int inf = 10;
}

// ����һ�������ռ�two����������������X��inf
namespace two
{
	int x;
	int inf = 100;
}

// ʹ�������������ռ�one
using namespace one;
int main()
{
	// ��ʹ�������ռ���е�x
	using two::x;
	x = -100;
	cout << inf << endl;
	cout << M << endl;
	
	// ʹ�� �����ռ���::�ֲ������� ����δʹ��using����������
	two::inf *= 2;
	cout << two::inf << endl;

	// �Ѿ�ʹ��using���������ݿ���ֱ�ӷ���
	cout << x << endl;
	system("pause");
	return 0;
}