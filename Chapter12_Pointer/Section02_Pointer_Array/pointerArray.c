// SECTION 02 ������ �迭



// �⺻ 12-6 2���� �迭					// ������ : 100�ڸ� ä���� ���ϸ� �޸� ���� ����

/*#include<stdio.h>

int main()
{
	char data[3][100];
	int i;

	for (i = 0; i < 3; i++)
	{
		printf(" %d ��° ���ڿ� : ", i + 1);
		gets(data[i]);
	}

	printf("\n -- �Է°� �ݴ�� ���(������ �迭) --\n");
	for (i = 2; i >= 0; i--)
	{
		printf(" %d :%s\n", i + 1, data[i]);
	}
}		*/		



//���� 12-7 ������ �迭 Ȱ��
//#include<stdio.h>
//#include<malloc.h>
//#include<string.h>
//
//int main()
//{
//	char* p[3];
//	char imsi[100];    //�Է°��� ������ �ӽ� ���� �迭
//	int i, size;
//
//	for (i = 0; i < 3; i++)
//	{
//		printf(" %d ��° ���ڿ� : ", i + 1);
//		gets(imsi);
//
//		size = strlen(imsi);
//		p[i] = (char*)malloc((sizeof(char) * size) + 1);  //�Է��� ���� +1 ũ���� �޸� �Ҵ��ϰ� char* ũ��� ������ p[i]�� ����
//		
//		strcpy(p[i], imsi);					// imsi�� ������ �Է¹��ڿ��� p[0],p[1],p[2]�� ������� ����
//	}
//
//	printf("\n-- �Է°� �ݴ�� ���(������) --\n");
//	for (i = 2; i >= 0; i--)
//	{
//		printf(" %d :%s\n", i + 1, p[i]);
//	}
//
//	for (i = 0; i < 3; i++)
//		free(p[i]);
//}


//SELF STUDY ���ڿ� �ټ��� �Է�, �޸𸮸� 0���� �ʱ�ȭ�ϴ� calloc() �Լ� �̿��غ���
#include<stdio.h>
#include<malloc.h>
#include<string.h>

int main()
{
	char* p[5];
	char imsi[100];
	int i, size;

	for (i = 0; i < 5; i++)
	{
		printf( "%d ���� ���ڿ� : ", i+1);
		gets(imsi);

		size = strlen(imsi);

		//p[i] = (char*)malloc((sizeof(char) * size) + 1);
		p[i] = (char*)calloc(sizeof(char), size+1);  // malloc()���� ���� ��
		strcpy(p[i], imsi);
	}

	printf("\n --�Է°� �ݴ�� ���(������) --\n");
	for (i = 4; i >= 0; i--)
	{
		printf(" %d : %s\n", i + 1, p[i]);
	}

	for (i = 0; i < 5; i++)
		free(p[i]);
}
