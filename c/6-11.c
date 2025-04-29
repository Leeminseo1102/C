#include <stdio.h>
void main()
{ 
	int i;
	int a;
	int hap = 0;

	printf(" ¸î´Ü : ");
	scanf("%d", &a);

	for(i = 1;i<= a;i++){
		hap = a * i;
	printf("%d * %d = %d \n", a, i, hap);
	}
	printf("ÇÕ :%d",hap);
     }	

