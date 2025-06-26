#include <stdio.h>
void main()
{
	int a;
	int b;
	double c;
	char f;

	printf("use : ");

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%lf", &c);
	scanf("%c", &f);
	

	printf("%f \n", (double)(a * b) - c);
	printf("%c \n", f);
}
