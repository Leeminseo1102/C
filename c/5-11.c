#include <stdio.h>
void main()
{
	int a;
	int b;
	char y;

	printf("������ ���ٷ� ����� �Է��ϼ��� : ");
	scanf("%d %c %d", &a, &y, &b);

	switch(y){
		case '+' : printf("%d + %d = %d �Դϴ�", a, b,a+b);
			   break;

		case '-' : printf("%d - %d = %d �Դϴ�", a, b,a-b);
			   break;

		case '*' : printf("%d * %d = %d �Դϴ�", a, b,a*b);
			   break;

		case '/' : printf("%d / %d = %d �Դϴ�", a, b,a/b);
			   break;

		case '%' : printf("%d %% %d = %d �Դϴ�", a, b,a % b);
			   break;
		default:
			   printf("�����ڸ� �߸� �Է��ϼ̽��ϴ�");
	}
}	
