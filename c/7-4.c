#include <stdio.h>
void main()
{
	int a,b;
	char ch;
	
	while(1){
		printf("����� �μ��� �����Ͻÿ�(������� ��Ʈ�� + C): ");
		scanf("%d %d", &a , &b);

		printf("�����  �����ڸ� ��������");
		scanf("%c", &ch);

		switch (ch){
			
		case '+' :
			printf("%d + %d = %d�Դϴ�. \n", a, b, a+b);
			break;
		case '-' :
			printf("%d - %d = %d�Դϴ�. \n", a, b, a-b);
			break;
		case '*':	
			printf("%d * %d = %d�Դϴ�. \n", a, b, a*b);
			break;
		case '/':
			printf("%d / %d = %d�Դϴ�. \n", a, b, a/b);
			break;
		case '%':
			printf("%d % %d = %d�Դϴ�. \n", a, b, a%b);
			break;
		default :
			printf("�����ڸ� �߸� �Է��ϼ̽��ϴ�.\n");
		}
	}
}
