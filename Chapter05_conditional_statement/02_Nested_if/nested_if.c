// ��ø if�� ��� �� 1

#include<stdio.h>

int main()
{
	int a = 75;

	if(a>50)
	{
		if (a < 100)
		{
			printf("50���� ũ�� 100���� �۱���.\n");
		}
		else
		{
			printf("�Ϳ� 100���� ũ����!\n");
		}

	}
	else
	{
		printf("����~~ 50���� �۱���~ \n");
	}


// ���� 5-8, ��ø if�� ��� ��2
	printf("\n\n>> ��ø if�� ��� ��2\n");

	//int a;
	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &a);

	if (a >= 90)
	{
		printf("A");
	}
	else
	{
		if (a >= 80)
		{
			printf("B");
		}
		else
		{
			if (a >= 70)
			{
				printf("C");
			}
			else

			{
				if (a >= 60)
				{
					printf("D");
				}
				else
				{
					printf("F");
				}
			}
		}
	}
	printf(" �����Դϴ�.\n");
}



