// ex26 포인터를 이용한 배열의 정렬
// 배열에 임의의 값 10개를 저장하고, 포인터를 이용해 크기순으로 정렬하는 프로그램

#include<stdio.h>

int main()
{
	int aa[10] = { 1, 3,2,0,8,7,4,20,6,9 };
	int tmp;
	int i, k;

	int* p;

	p = aa;

	printf("정렬 전 배열 aa ==> ");
	for (i = 0; i < 10; i++)
	{
		//printf("%d ", aa[i]);
		printf("%d ", *(p + i));
	}
	printf("\n");

	//정렬 시작
	for (i = 0; i < 9; i++)  // 인덱스 0~9 의 숫자를 그 뒤의 숫자들과 비교할 것임
	{
		for (k = i + 1; k < 10; k++)
		{
			//if(aa[i] > aa[i+1])
			if (*(p + i) > *(p + k))
			{
				tmp = *(p + i);
				*(p + i) = *(p + k);
				*(p + k) = tmp;
			}
		}
	}

	printf("정렬 후 배열 aa ==> ");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}
	printf("\n");



	//  포인터 없이 해보기
	//for (i = 0; i < 9; i++)					// 순차 비교라 포인터 없이 구현 가능한 것 같다.
	//{
	//	for (k = i + 1; k < 10; k++)
	//	{
	//		if (aa[i] > aa[k])
	//		{
	//			tmp = aa[i];
	//			aa[i] = aa[k];
	//			aa[k] = tmp;
	//		}
	//	}
	//}

	//printf("정렬 후 배열 aa ==> ");
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d ", aa[i]);
	//}
	//printf("\n");

}