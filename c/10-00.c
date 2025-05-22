#include <stdio.h>
void funcl (char a,char b)
{
	int imsi;

	imsi = a;
	a = b;
	b = imsi;
}
void func2 (char *a,char *b)
{
	int imsi;

	imsi = *a;
	*a = *b;
	*b = imsi;
}
void main ()
{
	char x = 'A', y = 'Z';
	printf("원래 값     :x= %c y=%c\n", x,y);
	
	funcl(x,y);
	printf("원래 값     :x= %c y=%c\n", x,y);
	
	func2(&x,&y);
	printf("원래 값     :x= %c y=%c\n", x,y);
}
