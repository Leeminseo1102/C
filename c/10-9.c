#include <stdio.h>

void funcl(int *a)
{
	*a = *a+1;
	printf("���޹��� a ==> %d\n",*a);
}
void main()
{
	int a =10;

	funcl(&a);
	printf("funcl() ���� ���� a==> %d\n",a);
}
