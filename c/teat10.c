#include <stdio.h>

void main()
{
	int a,b;
	
	printf("입력진수 결정 <1>10 <2>16 <3>8 : ");
	scanf("%d", &a);

	printf("값 입력 : ");
	scanf("%d" , &b);

	printf("10진수 ===> %d\n", b);
	printf("16진수 ===> %X\n", b);
	printf("8진수 ===> %o\n", b);
}
