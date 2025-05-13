#include <stdio.h>
void main()
{
	int aa[4];
	int hap = 0;

	printf("1번째 더할 숫자 값을 입력하시오 : ");
		scanf("%d", &aa[0]);
	printf("2번째 더할 숫자 값을 입력하시오 : ");
		scanf("%d", &aa[1]);
	printf("3번째 더할 숫자 값을 입력하시오 : ");
		scanf("%d", &aa[2]);
	printf("4번째 더할 숫자 값을 입력하시오 : ");
		scanf("%d", &aa[3]);
	hap = aa[0] + aa[1] + aa[2] + aa[3];

	printf("합계 ==> %d \n",hap);
}
