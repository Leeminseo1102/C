#include <stdio.h>
void exchange();

int a,b;

void main()
{
	printf("a의 값을 입력 : ");
	scanf("%d", &a);
	printf("b의 값을 입력 : ");
	scanf("%d", &b);

	exchange();

	printf("\n 뒤 바뀐 값은 a는 %d,b는 %d \n", a,b);
}
