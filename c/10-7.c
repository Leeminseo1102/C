#include <stdio.h>
void funcl()
{
	printf("void형 함수라서 돌려줄게 없음  \n");
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
	printf("int형 함수에서 돌려준 값  %d \n",a);
}
