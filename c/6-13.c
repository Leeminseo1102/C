#include <stdio.h>
void main()
{
	int i;
	int k;
	int hap = 0;

	for(i = 2;i <= 9;i++){
		for(k = 1;k <= 9; k++){
			hap = i * k;
			printf("%d * %d = %d \n", i, k, hap);
		}
	printf("\n");
	}
}
