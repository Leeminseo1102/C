#include <stdio.h>
void main()
{
	int a;
	int b;
	int c;
	int h = 0;


	printf("합계의 시작값 ==> ");
	scanf("%d", &a);

	printf("합계의 끝값 ==> ");
	scanf("%d", &b);

	printf("배수 ==> ");
	scanf("%d", &c);

	for(int i = a; i <= b; i++){
		if(i % c == 0){
			h += i;
		}
		
	}
	
		printf("%d부터 %d까지의 %d배수의 합계 ==> %d", a, b, c, h);
}
