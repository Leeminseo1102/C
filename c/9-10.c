#include <stdio.h>
void main()
{	
	int a,b = 0;
	int* p;
	int* q;

	p = &a;
	q = &b;

	printf("a값 입력 : ");
	scanf("%d",&a);

	printf("b값 입력 : ");
	scanf("%d",&b);

	printf("바뀐 값 a는 %d, b는 %d", *q,*p);
}
