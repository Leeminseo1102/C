#include <stdio.h>

void main()
{
	enum week { sun, mom, tue, wed, thu, fri, sat };
	enum week ww;
	ww = sat;

	if(ww == 0)
		printf("������ �Ͽ����Դϴ� \n");
	else

		printf("������ �Ͽ����� �ƴմϴ� \n");
}
