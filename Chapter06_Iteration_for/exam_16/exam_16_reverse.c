//exam16, �Էµ� ���ڸ� �ݴ� ������ ���

#include<string.h>
#include<stdio.h>

int main()
{
	char str[100];
	int str_cnt;
	int i;

	printf("������ �� ���ڸ� �Է�(100�� ����) : ");
	scanf("%s", str);  //scanf_s("%s", str);  scanf_s�� ����ϴ� ����� �ȵǰ� �����������. scanf�� �ٲپ����� �ذ�. 
						//�Է��ϴ� ���� ���̿� ������ ����� ��
	

	printf("\n");
	printf("�Է��� ���ڿ� ==> %s\n", str);
	printf("��ȯ�� ���ڿ� ==>");

	str_cnt = strlen(str);

	for (i = str_cnt; i >= 0; i--)
	{
		printf("%c", str[i]);
	}

	printf("\n");
}