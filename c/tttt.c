#include <stdio.h>
void main()
{
	int a;

	printf("년도를 입력하세요");
	scanf("%d", &a);

	int div4 = (a / 4 * 4 == a);
	int div100 = (a / 100 * 100 == a);
	int div400 = (a / 400 * 400 == a);

	if((div4 && !div100) || div400){
		printf("%d 년은 윤년입니다\n", a);
	}else{
		printf("%d 년은 윤년이 아닙니다\n", a);
	}
}
