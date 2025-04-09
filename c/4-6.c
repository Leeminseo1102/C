#include <stdio.h>
void main()
{
	int a = 99;

	printf("and 연산 : %d \n", ( a >= 100) && ( a<= 200) );
	printf("or 연산 : %d \n", ( a >= 100) || (a <= 200) );

	
	printf(" not연산 : %d \n", ! (a == 100) );
}
