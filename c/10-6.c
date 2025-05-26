#include <stdio.h>

int a =100;

void funcl()
{
	int a =200;
	printf("%d \n",a);
}
void main()
{
	funcl();
	printf("%d \n", a);
}
		
