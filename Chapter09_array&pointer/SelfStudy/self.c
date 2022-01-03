// SELFSTUDY  // 임의의 수를 입력받아 배열에 저장한 다음 검색하기

// 어려움.. 정신 맑을 때 다시 공략

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
		printf("<1>무작위 수 입력 <2>검색 <3> 삭제 (종료:0) :");
		scanf_s("%d", &aa);

		switch (aa)
		{
		case 1:
		{
			printf("임의의 수를 입력하세요. : ");
			scanf_s("%d", ss[i]);
			break;
		}
			

		case 2:
			printf("검색할 수를 입력하세요. : ");
			scanf_s("%d", &search);
			for (i = 0; i < 50; i++)
			{
				if (ss[i] == search)
					tmp = ss[i];
				
				else
					printf("찾으시는 숫자가 없습니다. \n");

				printf("배열의 %d번째에 %d가 있습니다. \n", i + 1, search);
			}
			break;

		case 3:
		{
			printf("프로그램을 종료합니다. \n");
			break;
		}
			

		default:
			printf("잘못입력했습니다. 다시 입력하세요. \n");
		}

		
	}
	

	//printf("입력된 무작위 수 출력 : ");
	//for (i = 0; i < strlen(ss); i++)
	//{
	//	printf("%d ", ss);
	//}


}