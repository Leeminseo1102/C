#include <string.h>
#include <stdio.h>

void main()
{
	char ss[20];
	char tt[20];
	int r1, r2;

	puts("ù���� �Է�");
	gets(ss);

	puts("�ι��� �Է�");
	gets(tt);

	r1 = strlen(ss);
	r2 =strlen(tt);

	printf("ù %d \n", r1);
	printf("�� %d \n", r2);
	if(strcmp(ss,tt) == 0 ){
		puts("�ι�° ������ ���� \n");
	}
	else
	{
		puts("�ι��� ������ �ٸ��� \n");
	}
}
