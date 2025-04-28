#include <stdio.h>
void main()
{
	int hap = 0;
	int i;
	int a;

	printf("원하는 값을 입력하시오: ");
	scanf("%d", &a);

	for(i = 1; i <= a;i++){
		hap = i + hap;
	}
	printf("1부터 %d까지의 합: %d \n", a, hap);
}
		
