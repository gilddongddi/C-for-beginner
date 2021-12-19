// 중첩 if문 사용 예 1

#include<stdio.h>

int main()
{
	int a = 75;

	if(a>50)
	{
		if (a < 100)
		{
			printf("50보다 크고 100보다 작군요.\n");
		}
		else
		{
			printf("와우 100보다 크군요!\n");
		}

	}
	else
	{
		printf("에게~~ 50보다 작군요~ \n");
	}


// 응용 5-8, 중첩 if문 사용 예2
	printf("\n\n>> 중첩 if문 사용 예2\n");

	//int a;
	printf("점수를 입력하세요 : ");
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
	printf(" 학점입니다.\n");
}



