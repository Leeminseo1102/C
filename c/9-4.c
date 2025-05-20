#include <stdio.h>
void main()
{
	int aa[3] = {10,20,30};

	printf("aa[0]의 값은 %d,주소는 %d \n",aa[0],&aa[0]);
	printf("aa[1]의 값은 %d,주소는 %d \n",aa[1],&aa[1]);
	printf("aa[2]의 값은 %d,주소는 %d \n",aa[2],&aa[2]);
	printf("aa[3]의 값은 %d,주소는 %d \n",aa[3],&aa[3]);
}
