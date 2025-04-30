#include <stdio.h>
void main()
{
	int a;
	int i;
	int hap = 0;


	for(i = 2; i <= 9;i++){
		for(a = 1; a <= 9; a++){
			hap = i * a;
			printf("%2d X %2d = %2d", i, a, hap);
		}
		printf("\n");
	}
}	
