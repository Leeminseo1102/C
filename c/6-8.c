#include <stdio.h>
void main()
{
	int hap = 0;
	int i;

	for(i = 501;i <= 1000;i+=2){
		hap= hap + i;
	}
	printf("[%d \n]",hap);
}



