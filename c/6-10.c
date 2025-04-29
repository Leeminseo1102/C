#include <stdio.h>
void main()
{
	int hap = 0;
	int i;
	int a, b, c;

	printf("시작 값 ,끝 값, 증가 값을 입력: ");
	scanf("%d %d %d",&a ,&b, &c);


	for(i = a;i <= b;i= i+c){
		hap = hap + i;
	}
	printf(" %d에서 %d까지  %d씩 증가하는 값의 합 : %d \n", a, b, c, hap);
}
