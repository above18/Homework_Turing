#include <stdio.h>
#include <math.h>
#include<iostream>
#include <windows.h>
#define PI 3.1415926
using namespace std;
int main()
{
	int r;
	double l, s;
	cin >> r;
	l = 2 * PI*r;
	s = PI * r*r;
	cout << "�ܳ���" << l << "�������" << s << endl;
	system("pause");
	return 0;
}

