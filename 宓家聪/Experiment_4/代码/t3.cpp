#include <iostream>
using namespace std;

int main()
{
	int *ptr;
	ptr = new int[20];
	cout << "���������ݸ�����";
	int num;
	cin >> num;
	cout << "����������:" << endl;
	int posnum = 0;
	int negnum = 0;
	int sum = 0;
	for (int i=0; i<num; i++)
	{
		cin >> ptr[i];
		sum += ptr[i];
		if (ptr[i] > 0)
		{
			posnum++;
		}
		else if (ptr[i] < 0)
		{
			negnum++;
		}
	}
	cout << "����������Ϊ��" << posnum << endl;
	cout << "�����и���Ϊ��" << negnum << endl;
    cout << "���ݾ�ֵΪ��" << sum/num << endl;
    int sum2 = 0;
    for(int i=0; i<num; i++)
    {
        sum2 += (ptr[i] - sum)*(ptr[i] - sum);
    }
    cout << "���ݷ���Ϊ��"  << sum2/num << endl;
	delete[] ptr;

	return 0;
}
