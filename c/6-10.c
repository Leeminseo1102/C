#include <stdio.h>
void main()
{
	int hap = 0;
	int i;
	int a, b, c;

	printf("���� �� ,�� ��, ���� ���� �Է�: ");
	scanf("%d %d %d",&a ,&b, &c);


	for(i = a;i <= b;i= i+c){
		hap = hap + i;
	}
	printf(" %d���� %d����  %d�� �����ϴ� ���� �� : %d \n", a, b, c, hap);
}
