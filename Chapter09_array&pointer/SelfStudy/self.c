// SELFSTUDY  // ������ ���� �Է¹޾� �迭�� ������ ���� �˻��ϱ�

// �����.. ���� ���� �� �ٽ� ����

#include<stdio.h>
#include<string.h>

int main()
{
	int ss[50];
	int i;
	int aa;
	int tmp;
	int search;

	for (i = 0; i < 50; i++)
	{
		printf("<1>������ �� �Է� <2>�˻� <3> ���� (����:0) :");
		scanf_s("%d", &aa);

		switch (aa)
		{
		case 1:
		{
			printf("������ ���� �Է��ϼ���. : ");
			scanf_s("%d", ss[i]);
			break;
		}
			

		case 2:
			printf("�˻��� ���� �Է��ϼ���. : ");
			scanf_s("%d", &search);
			for (i = 0; i < 50; i++)
			{
				if (ss[i] == search)
					tmp = ss[i];
				
				else
					printf("ã���ô� ���ڰ� �����ϴ�. \n");

				printf("�迭�� %d��°�� %d�� �ֽ��ϴ�. \n", i + 1, search);
			}
			break;

		case 3:
		{
			printf("���α׷��� �����մϴ�. \n");
			break;
		}
			

		default:
			printf("�߸��Է��߽��ϴ�. �ٽ� �Է��ϼ���. \n");
		}

		
	}
	

	//printf("�Էµ� ������ �� ��� : ");
	//for (i = 0; i < strlen(ss); i++)
	//{
	//	printf("%d ", ss);
	//}


}