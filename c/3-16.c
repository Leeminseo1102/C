#include <stdio.h>
void main()
{
	//%d 10���� , %x 16���� ,%o 8 ���� 
	

	int a, b = 0;


	printf("<1>10 <2>16 <3>8 : ");
	scanf("%d", &a);

	printf("�� �Է� : ");
	


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

		printf("�߸��� �Է��Դϴ�. \n");
		return;	
	}
	printf("10���� ===> %d \n", b);
	printf("16���� ===> %X \n", b);
	printf("8���� ===> %o \n", b);
}

