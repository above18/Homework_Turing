#include <iostream>
#include <windows.h>
#include <cmath>
#define PAI 3.1415926
using namespace std;
int main()
{
	float r;
	cout << "Please enter the radius of circle��" << endl;
	cin >> r;
	cout << "Area��" << PAI*pow(r,2) << endl;
	cout << "Perimeter��" << 2*PAI*r << endl;
	system("pause");
	return 0;
}
