#include <stdio.h>
void main()
{
	int menu;

	do {
		printf("\n 손님이 주문하시겠습니까? \n");
		printf("<1>카페라떼 <2>카푸치노 <3>아메리카노 <4>그만시킬래요ㅕ ===> ");
		scanf("%d", &meun);

		switch(meun){
			case 1 : printf("#카페라떼를 주문 하셨습니다 \n"); break;
			case 2 : printf("#카푸치노를 주문 하셨습니다 \n"); break;
			case 3 : printf("#아메리카노를 주문 하셨습니다 \n"); break;
			case 4 : printf("#주문이 끝나셨습니다 \n"); break;
			default: printf("잘못 시키셨습니다 \n");
		}
	}while(meun != 4)
}
