#include <stdio.h>
#include <string.h>

void main()
{
	char name[3] [10];
	int kor[3];
	int eng[3];
	float avg[3];

	int i;

	strcpy(name[0], "KIM");
	kor[0] = 90;
	eng[0] = 80;
	avg[0] = (kor[0] + eng[0]) / 2.0f;

	strcpy(name[1], "LEE");
	kor[1] = 70;
	eng[1] = 100;
	avg[1] = (kor[1] + eng[1]) / 2.0f;

	strcpy(name[2], "PARK");
	kor[2] = 10;
	eng[2] = 15;
	avg[2] = (kor[2] + eng[2]) / 2.0f;

	for(i=0; i<3;i++){
		
		printf("\n");
		printf("�л� �̸� ===> %s\n", name[i]);
		printf("���� ���� ===> %d\n", kor[i]);
		printf("���� ���� ===> %d\n", eng[i]);
		printf("��� ���� ===> %5.1f\n", avg[i]);
	}
}


