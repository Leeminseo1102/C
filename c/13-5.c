#include <stdio.h>
#include <string.h>

void main()
{
	struct student {
		char name[10];
		int kor;
		int eng;
		float avg;
	};

	struct student s[3];

	int i;

	strcpy(s[0].name,"Kim");
	s[0].kor = 90;
	s[0].eng = 80;
	s[0].avg = (s[0].kor + s[0].eng) /2.0f;

	strcpy(s[1].name,"Lee");
	s[1].kor = 95;
	s[1].eng = 92;
	s[1].avg = (s[1].kor + s[1].eng) /2.0f;

	strcpy(s[2].name,"Kim");
	s[2].kor = 63;
	s[2].eng = 80;
	s[2].avg = (s[2].kor + s[2].eng) /2.0f;
	printf("����ü �迭");

	for(i=0; i<3; i++)
	{

		printf("\n");
		printf("�л� �̸� ===> %s\n",s[i].name);
		printf("���� ���� ===> %d\n", s[i].kor);
		printf("���� ���� ===> %d\n", s[i].eng);
		printf("��� ���� ===> %5.1f\n", s[i].avg);
	}
}
