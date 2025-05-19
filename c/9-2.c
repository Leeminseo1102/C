#include <stdio.h>
void main()
{
	char stack[5];
	int top=0;

	char carName = 'A';
	int select=9;

	while (select!= 3)
	{
		printf("<1> 자동차 넣기 <2> 자동차 빼기 <3> 끝 : ");
		scanf("%d",&select);

		switch(select)
		{
			case 1: 
				if(top >= 5)
				{ printf("터널이꽉차서 차가 못들어가\n");}
				else
				{ stack[top] = carName++;
					printf("%c 자동차가 터널에 들어감 \n", stack[top]);
					top++;
				}
				break;
			case 2:
				if(top <= 0)
				{ printf("빠져나갈 값이 없음 \n");}
				else
				{	top--;
					printf("%c 자동차가 터널에서 빠짐 \n",stack[top]);
					stack[top] = ' ';
				}
				break;
			case 3:
				printf("현재 터널에 %d의 차량이 있음\n",top);
				printf("프로그램을 종료합니다\n");
				break;
			default:
				printf("다시");
		}
	}
}
	

