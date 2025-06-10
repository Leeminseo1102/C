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


	printf("\n---공용체---\n");
	printf("총 점수 %d \n", u.tot);
	printf("등급  %C\n", u.greade);
}
