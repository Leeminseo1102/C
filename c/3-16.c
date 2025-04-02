#include <stdio.h>
void main()
{
	//%d 10진수 , %x 16진수 ,%o 8 진수 
	

	int a, b = 0;


	printf("<1>10 <2>16 <3>8 : ");
	scanf("%d", &a);

	printf("값 입력 : ");
	


	switch(a){
		case 1:
			scanf("%d", &b);
		break;


		case 2:
			scanf("%x", &b);
		break;

		case 3:
			scanf("%o", &b);
		break;	

		default:

		printf("잘못된 입력입니다. \n");
		return;	
	}
	printf("10진수 ===> %d \n", b);
	printf("16진수 ===> %X \n", b);
	printf("8진수 ===> %o \n", b);
}

