#include<cstdio>

using namespace std;
const double pi = 3.14159265358;
int main()
{
    int r;
    double a;
    printf("������Բ�İ뾶\n");
    scanf("%d", &r);
    a = (double)r;
    printf("Բ�����Ϊ:  %.fpi(Լ����%f)\nԲ���ܳ�Ϊ:  %.fpi(Լ����%f)\n", a*a, pi*a*a, 2*a, 2*pi*a);
    return 0;
}
