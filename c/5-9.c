#include <stdio.h>
void main()
{
	int a;

	printf("1~4 ���̿� ���ڸ� ���ÿ�");
	scanf("%d", &a);

	switch (a)
	{
		case 1 :
			printf("1");
		   	break
		case 2 :
			printf("2");
			break
		case 3 : 
			printf("3");
			break
		case 4 :
			printf("4");
			break
		default :
			printf("����");
	}
}
