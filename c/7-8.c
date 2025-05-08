#include <stdio.h>
void main()
{
	int a,b;

	while (1){
		printf("더할 두수를 입력하시오(멈출려면 0입력): ");
		scnaf("%d %d", &a, &b);

		if(a == 0)
			break;

		printf("%d + %d = %d \n", a, b, a+b);
	}
	printf("0을 입력해서 끝났습니다.\n");
}	
