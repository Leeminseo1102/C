#include <stdio.h>
void main()
{
	int a;

	printf("�⵵�� �Է��ϼ���");
	scanf("%d", &a);

	int div4 = (a / 4 * 4 == a);
	int div100 = (a / 100 * 100 == a);
	int div400 = (a / 400 * 400 == a);

	if((div4 && !div100) || div400){
		printf("%d ���� �����Դϴ�\n", a);
	}else{
		printf("%d ���� ������ �ƴմϴ�\n", a);
	}
}
