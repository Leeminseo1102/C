#include <stdio.h>
void main()
{ 
	int aa[4];
	int hap = 0;
	int i;

	for(i = 0; i<=3;i++){
		printf("%d번째 더할값을 입력해주세요: ",i+1 );
	       scanf("%d" , &aa[i]);
	}	       
	hap = aa[0] + aa[1] + aa[2] +aa[3];
	printf("%d \n", hap);
}

