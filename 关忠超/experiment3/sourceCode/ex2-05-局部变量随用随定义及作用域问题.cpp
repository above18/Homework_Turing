#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int arr[3] = { 0 }, i = 123;    // ����1���ֲ�����,�����򲻺���2��i������
	cout << "i=" << i << endl;    // �����i����ֵΪ 123
	{
		for (int i = 0; i < 2; i++)    // ����ڶ����ֲ�����i,����������ڸ�����
		{
			arr[i] = (i + 5) * 10 + 3;
			cout << "i=" << i << endl;    // ����ڶ����ֲ�����i��ֵ,��һ��i��������
		}
		
		arr[2]++;
		cout << "i=" << i << endl;
	}                              // �ڶ���i�������򵽴˽���
	cout << "i=" << i << endl;     // �����Ϊ��һ��i��ֵ
	int sum = 0;    // ����ֲ�����sum,�����涨��
	for (i = 0; i < 3; i++)    // ��һ��i��������
	{
		sum += arr[i];
	}
	cout << "i=" << i << endl;
	for (i = 0; i < 3; i++)
	{
		cout << setw(4) << arr[i] << endl;    // setw���Ƹ�ʽ,���水ÿ��Ԫ��ռ4�����
	}
	cout << "i=" << i << ",sum = " << sum << endl;
	system("pause");
	return 0;
}