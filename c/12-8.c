#include <stdio.h>
#include <malloc.h>
void main()
{
	int* a;
	int i,hap=0;
	int cnt;


	

	printf("�Է��� ���� �� : ");
	scanf("%d", &cnt);

	a = (int*) malloc(sizeof(int) * cnt);

	for(i=0;i<cnt;i++)
	{
		printf("%d���� ���� : ", i+1);
		scanf("%d",a+i);


	}

	for(i=0;i<cnt;i++)
	{
		if( *(a+i) % 2 == 0){	
	
			hap = hap + *(a+i);
		}
		
		
	}
	printf("%d",hap);
	free(a);
}
