#include <stdio.h>
#include <stdlib.h>


struct student{
	char name[20];
	int age;
};

int main(){
	int count;
	struct student *p;
	printf("입력할 학생 수 : ");
	scanf("%d" , &count);
	
	p = (struct student *)malloc(sizeof(struct student) * count);
	

	for(int i = 0;i < count;i++)
	{
		printf("이름과 나이 입력 : ");
		scanf("%s %d",p[i].name,&p[i].age);

	}
	printf("\n- - 학생 명단 - -\n");
	for(int i = 0;i < count; i++){
		printf("이름: %s , 나이: %d\n", p[i].name, p[i].age);
	}
	free(p);
}

