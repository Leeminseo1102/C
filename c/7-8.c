#include <stdio.h>
void main()
{
	int a,b;

	while (1){
		printf("���� �μ��� �Է��Ͻÿ�(������� 0�Է�): ");
		scnaf("%d %d", &a, &b);

		if(a == 0)
			break;

		printf("%d + %d = %d \n", a, b, a+b);
	}
	printf("0�� �Է��ؼ� �������ϴ�.\n");
}	
