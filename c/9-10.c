#include <stdio.h>
void main()
{	
	int a,b = 0;
	int* p;
	int* q;

	p = &a;
	q = &b;

	printf("a�� �Է� : ");
	scanf("%d",&a);

	printf("b�� �Է� : ");
	scanf("%d",&b);

	printf("�ٲ� �� a�� %d, b�� %d", *q,*p);
}
