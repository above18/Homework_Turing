#include<stdio.h>
add(int a, int b);
int main()
{
	int x, y, sum;
	printf("Please input x and y:\n");
	scanf("%d%d", &x, &y);               /*�������x��y��ֵ*/
	sum = add(x, y);                     /*������ͺ������������sum��*/
	printf("&d+%d=%d\n", x, y, sum);     /*��ʾ������*/
	return 0;
}
add(int a, int b)
{
	return a + b;                          /*��ͺ���*/
}