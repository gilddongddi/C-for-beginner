// ex34 : ����ü �����͸� Ȱ���� �л� ����

// ����ü �����Ϳ� �޸� �Ҵ� �Լ��� �̿��Ͽ� �л��� �̸��� ���̸� �Է¹޾� ����ϴ� ���α׷�

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

	printf("�Է��� �л� �� : ");
	scanf("%d", &cnt);				

	s = (struct student*)malloc((sizeof(struct student)) * cnt);   //�л� ����ŭ �޸𸮸� �Ҵ��ϰ� �ּҸ� ������ ������ ����

	for (i = 0; i < cnt; i++)
	{
		printf("�̸��� ���� �Է� : ");
		scanf("%s %d", s[i].name, &s[i].age);
	}

	printf("\n\n --�л� ��� --\n");
	for (i = 0; i < cnt; i++)
		printf("�̸�: %s, ���� : %d \n", s[i].name, s[i].age);

	free(s);
}
