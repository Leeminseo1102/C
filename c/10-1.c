#include <stdio.h>
void main()
{
	int coffee;

	printf("� Ŀ�Ǹ� �帱���? (1: ���� 2:�� 3:��ũ ) ");
	scanf("%d", &coffee);

	printf("\n# 1.�߰ſ� ���� �غ��Ѵ�\n ");
	printf("# 2.�������� �غ��Ѵ�\n");

	switch (coffee)
	{
		case 1:	printf("# 3.����Ŀ�Ǹ� ź�� \n");break;
		case 2:	printf("# 3.��Ŀ�Ǹ� ź�� \n");break; 	
		case 3:	printf("# 3.��ũĿ�Ǹ� ź�� \n");break;
		default : printf("�� ó�Ծ�");

	}
	printf("# 4. ���� �״´� \n");
	printf("# 5. ��Ǭ���� ��� ���δ� \n\n");

	printf(" �մ� ");
}



