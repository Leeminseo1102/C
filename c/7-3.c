#include <stdio.h>
void main()
{
	int a,b;

	while(1){
		printf("더할 두수를 립혁하시오(멈출려면 컨트롤 + C) : ");
		scanf("%d %d", &a, &b);

		printf("%d + %d = %d \n", a, b, a+b);
	}
}
