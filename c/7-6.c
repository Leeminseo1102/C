#include <stdio.h>
void main()
{
	int menu;

	do {
		printf("\n �մ��� �ֹ��Ͻðڽ��ϱ�? \n");
		printf("<1>ī��� <2>īǪġ�� <3>�Ƹ޸�ī�� <4>�׸���ų����� ===> ");
		scanf("%d", &meun);

		switch(meun){
			case 1 : printf("#ī��󶼸� �ֹ� �ϼ̽��ϴ� \n"); break;
			case 2 : printf("#īǪġ�븦 �ֹ� �ϼ̽��ϴ� \n"); break;
			case 3 : printf("#�Ƹ޸�ī�븦 �ֹ� �ϼ̽��ϴ� \n"); break;
			case 4 : printf("#�ֹ��� �����̽��ϴ� \n"); break;
			default: printf("�߸� ��Ű�̽��ϴ� \n");
		}
	}while(meun != 4)
}
