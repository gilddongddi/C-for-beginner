// SECTIO 01 ģ�� ���� Ver 2.0 // self

#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void view_juso()
void add_juso()
void delete_juso()


int select;
char name[50];

int main()
{
	printf("****����ó ���α׷�****");
	printf("\n �޴��� �����ϼ���. \n");
	printf("<1>����ó ��� <2> ����ó ��� <3> ����ó ���� <4>������ : ");
	scanf("%d", &select);

	while (select != 4)
	{
		switch (select)
		{
		case 1: view_juso(); break;
		case 2:	add_juso(); break;
		case 3:	delete_juso(); break;
		case 4: break;

		default: printf("�߸� �Է��߽��ϴ�. \n");
		}
	}

}


void view_juso()
{
	FILE* rfp;
	rfp = fopen("c:\\users\\user\\c_for_begenner\\chapter15_practical_project\\addressbook\\juso.txt", "r");
	for (;;)
	{
		fputs(rfp);
		if (feof(rfp))
			break;

	}

}

void add_juso()
{
	char str[100];
	FILE* wfp;
	wfp = fopen("c:\\users\\user\\c_for_begenner\\chapter15_practical_project\\addressbook\\juso.txt", "a");

	printf(" �̸� : ");
	fgets(str);

	printf(" ��ȭ��ȣ : ");
	fgets();

	printf(" �̸��� : ");
	fgets();

	printf("\n%s\n", str);


}

void delete_juso()
{
	printf("\n������ �̸��� �˻��ϼ��� : ");
	scanf("%s", &name);
	for (i = 0; i < strlen(str)); i++)
	{
	if(str[i]==name)
}
}