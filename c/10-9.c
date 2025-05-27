#include <stdio.h>

void funcl(int *a)
{
	*a = *a+1;
	printf("전달받은 a ==> %d\n",*a);
}
void main()
{
	int a =10;

	funcl(&a);
	printf("funcl() 실행 후의 a==> %d\n",a);
}
