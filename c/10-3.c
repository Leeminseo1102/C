#include <stdio.h>

int coffee_machine(int button)
{
	printf("\n# 1.(�ڵ�����)�߰ſ�� �غ��Ѵ�.\n");
	printf("# 2. (�ڵ����� )�������� �غ��Ѵ�.\n");

	switch (button)
	{
	case 1: printf("# 3. (�ڵ�����) ����Ŀ�Ǹ� ź��\n");break;
	case 2: printf("# 3. (�ڵ�����) ��Ŀ�Ǹ� ź��\n");break;
	case 3: printf("# 3. (�ڵ�����) ��ũĿ�Ǹ� ź��\n");break;
	default: printf( "�׳� �Ծ�");break;
	}

}
void main()
{
	int coffee;
	int ret;

	printf("A��, � Ŀ�� �帱���?(1:���� 2:�� 3: ��ũ ");
	scanf("%d", &coffee);
	ret = coffee_machine(coffee);
	printf("A�� ����� \n\n");
}

