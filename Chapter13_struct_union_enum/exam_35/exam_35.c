// ex35, ����ü�� ����ü�� ȩ��

// ����� �̸��� �Է��ϰ� ��ȭ��ȣ �Ǵ� �ֹι�ȣ �� �� ������ �Է��ϴ� ���α׷�

#include<stdio.h>

int main()
{
	typedef struct _person {				//����ü���� ������ �� �� ���ο� ����ü�� ����Ѵ�.
		char name[10];
		union _id {
			char phone[15];
			char jumin[15];
		}id;
	}person;

	person p1;

	printf("�̸� ==> ");
	scanf("%s", p1.name);
	printf("��ȭ��ȣ �Ǵ� �ֹι�ȣ==> ");
	scanf("%s", p1.id.jumin);

	printf("\n --����ü/����ü ȥ�� Ȱ�� --\n");
	printf("�̸� ==> %s\n", p1.name);
	printf("��ȭ��ȣ/�ֹι�ȣ ==> %s\n", p1.id.phone);
}
 