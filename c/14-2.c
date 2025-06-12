#include <stdio.h>

void main(int argc,char* argv[])
{
	char str[200];
	FILE *rfp;

	if ( argc != 2)
	{
		printf("¸Å°³ ¾îÂ¼±¸");
		return;
	}
	rfp = fopen (argv[1] , "r");

	for( ;; )
	{
		fgets(str, 199, rfp);

		if (feof(rfp))
			break;

		printf("%s" , str);
	}

	fclose(rfp);
}
