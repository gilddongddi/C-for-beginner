// 기본 9-1 스택 구현 예1

#include<stdio.h>

//int main()
//{
//	char stack[5];
//	int top = 0;
//
//	stack[top] = 'A';
//	printf(" %c 자동차가 터널에 들어감\n", stack[top]);
//	top++;
//
//	stack[top] = 'B';
//	printf(" %c 자동차가 터널에 들어감 \n", stack[top]);
//	top++;
//
//	stack[top] = 'C';
//	printf(" %c 자동차가 터널에 들어감 \n", stack[top]);
//	top++;
//
//	printf("\n");
//
//	top--;
//	printf(" %c 자동차가 터널을 빠져나감 \n", stack[top]);
//	stack[top] = ' ';
//
//	top--;
//	printf(" %c 자동차가 터널을 빠져나감 \n", stack[top]);
//	stack[top] = ' ';
//
//	top--;
//	printf(" %c 자동차가 터널을 빠져나감 \n", stack[top]);
//	stack[top] = ' ';
//}


// 응용 9-2: 1을 입력하면 자동차가 들어가고 2를 입력하면 자동차가 빠져나오도록
int main()
{
	char stack[5];
	int top = 0;

	char carName = 'A';
	int select;

	while (select != 3)
	{
		printf("<1> 자동차 넣기 <2> 자동차 빼기 <3> 종료 : ");
		scanf_s("%d", &select);

		switch (select)
		{
		case 1:
			if (top >= 5)
			{
				printf("터널이 꽉 찼습니다.\n");
			}
			else
			{
				stack[top] = carName++;
				printf(" %c 자동차가 터널에 들어감 \n", stack[top]);
				top++;
			}
			break;

		case 2:
			if (top <= 0)
			{
				printf("빠져나갈 자동차가 없습니다.\n");
			}
			else
			{
				top--;
				printf(" %c 자동차가 빠져나감 \n", stack[top]);
				stack[top] = ' ';
			}
			break;

		case 3:
			printf("현재 터널에 %d 대가 있음 \n", top);
			printf("프로그램을 종료합니다.\n");
			break;

		default:
			printf("잘못 입력했습니다. 다시 입력하세요.\n");
		}
	}
}
