#include <stdio.h>
void funcl()
{
	printf("void�� �Լ��� �����ٰ� ����  \n");
}
int func2()
{
	return 100;
}
void main()
{
	int a;

	funcl();

	a = func2();
	printf("int�� �Լ����� ������ ��  %d \n",a);
}
