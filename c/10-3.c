#include <stdio.h>

int coffee_machine(int button)
{
	printf("\n# 1.(자동으로)뜨거운물을 준비한다.\n");
	printf("# 2. (자동으로 )종이컵을 준비한다.\n");

	switch (button)
	{
	case 1: printf("# 3. (자동으로) 보통커피를 탄다\n");break;
	case 2: printf("# 3. (자동으로) 블랙커피를 탄다\n");break;
	case 3: printf("# 3. (자동으로) 밀크커피를 탄다\n");break;
	default: printf( "그냥 먹어");break;
	}

}
void main()
{
	int coffee;
	int ret;

	printf("A님, 어떤 커피 드릴까요?(1:보통 2:블랙 3: 밀크 ");
	scanf("%d", &coffee);
	ret = coffee_machine(coffee);
	printf("A님 여기요 \n\n");
}

