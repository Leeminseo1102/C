#include <stdio.h>
void main()
{
	int a;
	int b;
	char y;

	printf("수식을 한줄로 띄어쓰기로 입력하세요 : ");
	scanf("%d %c %d", &a, &y, &b);

	switch(y){
		case '+' : printf("%d + %d = %d 입니다", a, b,a+b);
			   break;

		case '-' : printf("%d - %d = %d 입니다", a, b,a-b);
			   break;

		case '*' : printf("%d * %d = %d 입니다", a, b,a*b);
			   break;

		case '/' : printf("%d / %d = %d 입니다", a, b,a/b);
			   break;

		case '%' : printf("%d %% %d = %d 입니다", a, b,a % b);
			   break;
		default:
			   printf("연산자를 잘못 입력하셨습니다");
	}
}	
