#include <stdio.h>
void main()
{
	int i;
	int k;
	int t;

	for(t = 2; t <= 9;t++){
		printf(" #Á¦%d´Ü#",t);
	}
	printf("\n");
	printf("\n");
		for(i = 1; i<= 9; i++){	
			for(k = 2;k <= 9; k++){
			printf(" %dX%2d=%2d",k, i, i*k);
			}
		printf("\n");	
		}
}
