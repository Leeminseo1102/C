#include <stdio.h>

void main()
{
	int a,b;
	
	printf("�Է����� ���� <1>10 <2>16 <3>8 : ");
	scanf("%d", &a);

	printf("�� �Է� : ");
	scanf("%d" , &b);

	printf("10���� ===> %d\n", b);
	printf("16���� ===> %X\n", b);
	printf("8���� ===> %o\n", b);
}
