#include <stdio.h>

void main()
{
	union student {
		int tot;
		char greade;

	};

	union student u;

	u.tot = 300;
	u.greade = 'A';


	printf("\n---����ü---\n");
	printf("�� ���� %d \n", u.tot);
	printf("���  %C\n", u.greade);
}
