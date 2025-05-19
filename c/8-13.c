#include <string.h>
#include <stdio.h>

void main()
{
	char ss[20];
	char tt[20];
	int r1, r2;

	puts("첫번쨰 입력");
	gets(ss);

	puts("두번재 입력");
	gets(tt);

	r1 = strlen(ss);
	r2 =strlen(tt);

	printf("첫 %d \n", r1);
	printf("두 %d \n", r2);
	if(strcmp(ss,tt) == 0 ){
		puts("두번째 내용이 같다 \n");
	}
	else
	{
		puts("두번쨰 내용이 다르다 \n");
	}
}
