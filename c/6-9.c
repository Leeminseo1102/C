#include <stdio.h>
void main()
{
	int hap = 0;
	int i;
	int a;

	printf("���ϴ� ���� �Է��Ͻÿ�: ");
	scanf("%d", &a);

	for(i = 1; i <= a;i++){
		hap = i + hap;
	}
	printf("1���� %d������ ��: %d \n", a, hap);
}
		
