// ex34 : 구조체 포인터를 활용한 학생 관리

// 구조체 포인터와 메모리 할당 함수를 이용하여 학생의 이름과 나이를 입력받아 출력하는 프로그램

#include<stdio.h>
#include<malloc.h>

int main()
{
	struct student {
		char name[10];
		int age;

	};

	struct student* s;

	int cnt, i;

	printf("입력할 학생 수 : ");
	scanf("%d", &cnt);				

	s = (struct student*)malloc((sizeof(struct student)) * cnt);   //학생 수만큼 메모리를 할당하고 주소를 포인터 변수에 대입

	for (i = 0; i < cnt; i++)
	{
		printf("이름과 나이 입력 : ");
		scanf("%s %d", s[i].name, &s[i].age);
	}

	printf("\n\n --학생 명단 --\n");
	for (i = 0; i < cnt; i++)
		printf("이름: %s, 나이 : %d \n", s[i].name, s[i].age);

	free(s);
}
