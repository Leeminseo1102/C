#include <stdio.h>
#include <stdlib.h>


struct student{
	char name[20];
	int age;
};

int main(){
	int count;
	struct student *p;
	printf("�Է��� �л� �� : ");
	scanf("%d" , &count);
	
	p = (struct student *)malloc(sizeof(struct student) * count);
	

	for(int i = 0;i < count;i++)
	{
		printf("�̸��� ���� �Է� : ");
		scanf("%s %d",p[i].name,&p[i].age);

	}
	printf("\n- - �л� ��� - -\n");
	for(int i = 0;i < count; i++){
		printf("�̸�: %s , ����: %d\n", p[i].name, p[i].age);
	}
	free(p);
}

