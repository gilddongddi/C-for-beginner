// ���ڿ� �Լ��� ���ڿ� �ٷ��

// ���ڿ��� ���̸� �˷��ִ� �Լ�: strlen() 

#include<stdio.h>
#include<string.h>

int main()
{
	char ss[] = "XYZ";
	int len;  //���ڿ��� ���̸� ������ ����

	len = strlen(ss);

	printf("���ڿ� \"%s\"�� ���� ==> %d\n", ss, len);  //  \" : ū ����ǥ�� ����ϱ� ���� ���

	// null�� ������ ���̰� ��µ� 



	// ���ڿ��� �����ϴ� �Լ�: strcpy()
	char tt[4];

	strcpy(tt, "XYZ");

	printf("���ڿ� tt�� ���� ==> %s \n", tt);


	// �� ���ڿ��� �̾��ִ� �Լ�: strcat()
	char aa[7] = "XYZ";

	strcat(aa, "ABC");

	printf("�̾��� ���ڿ� aa�� ���� ==> %s \n", aa);


	// �� ���ڿ��� ���ϴ� �Լ�: strcmp()
	char bb[] = "XYZ";
	char cc[] = "xyz";
	int r;

	r = strcmp(bb, cc);  // �� ���ڿ��� ������ 0, �ٸ��� �� ���� ���ڸ� ������, �� ���ڿ��� ������ Ȯ���� �� ���

	printf("�� ���ڿ��� �񱳰�� ==> %d \n", r);



	//���ڿ� ����� �Լ� gets(), pts()

	char dd[20];
	char ee[20];
	int r1, r2;

	puts("ù��° ���ڿ��� �Է��ϼ���.");
	gets(dd);

	puts("�ι�° ���ڿ��� �Է��ϼ���.");
	gets(ee);

	r1 = strlen(dd);
	r2 = strlen(ee);

	printf("ù��° ���ڿ��� ���� ==> %d \n", r1);
	printf("�ι�° ���ڿ��� ���� ==> %d \n", r2);

	if ((strcmp(dd, ee)) == 0)
		puts("�� ���ڿ��� ������ �����ϴ�.\n");
	else
		puts("�� ���ڿ��� ������ �ٸ��ϴ�.\n");
}




