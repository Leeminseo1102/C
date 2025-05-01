#include <stdio.h>
void main()
{
	int a,b;
	char ch;
	
	while(1){
		printf("계산할 두수를 립력하시오(멈출려면 컨트롤 + C): ");
		scanf("%d %d", &a , &b);

		printf("계산할  연상자를 넣으세요");
		scanf("%c", &ch);

		switch (ch){
			
		case '+' :
			printf("%d + %d = %d입니다. \n", a, b, a+b);
			break;
		case '-' :
			printf("%d - %d = %d입니다. \n", a, b, a-b);
			break;
		case '*':	
			printf("%d * %d = %d입니다. \n", a, b, a*b);
			break;
		case '/':
			printf("%d / %d = %d입니다. \n", a, b, a/b);
			break;
		case '%':
			printf("%d % %d = %d입니다. \n", a, b, a%b);
			break;
		default :
			printf("연산자를 잘못 입력하셨습니다.\n");
		}
	}
}
