#include <stdio.h>
void main()
{
	int aa[4];
	int hap = 0;

	printf("1��° ���� ���� ���� �Է��Ͻÿ� : ");
		scanf("%d", &aa[0]);
	printf("2��° ���� ���� ���� �Է��Ͻÿ� : ");
		scanf("%d", &aa[1]);
	printf("3��° ���� ���� ���� �Է��Ͻÿ� : ");
		scanf("%d", &aa[2]);
	printf("4��° ���� ���� ���� �Է��Ͻÿ� : ");
		scanf("%d", &aa[3]);
	hap = aa[0] + aa[1] + aa[2] + aa[3];

	printf("�հ� ==> %d \n",hap);
}
