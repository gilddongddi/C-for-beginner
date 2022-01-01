// SECTION 01 배열의 이해

#include<stdio.h>

//int a, b, c, d;
//
//int main()
//{
//	printf("더할 숫자 네 개를 입력하세요.\n" );
//	scanf_s("%d %d %d %d", &a, &b, &c, &d);
//
//	printf("%d + %d + %d + %d = %d", a, b, c, d, a + b + c + d);

//int main()
//{
//	int aa[4];
//	printf("더할 숫자 네 개를 입력하세요. : \n");
//	scanf_s("%d %d %d %d", &aa[0], &aa[1], &aa[2], &aa[3]);   //scanf에서 값을 입력받아 배열의 특정위치에 저장할 때에도 &를 써야한다
//
//	printf("%d + %d + %d + %d = %d \n", aa[0],aa[1], aa[2], aa[3], aa[0]+aa[1]+aa[2]+aa[3]);
//
//
//}



// 배열의 활용범위 - 실제활용
// 응용 8-3 for문의 배열의 첨자를 활용하는 예

//int main()
//{
//	int aa[4];
//	int hap = 0;
//	int i;
//
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d번째 숫자를 입력하세요: ", i + 1);
//		scanf_s("%d", &aa[i]);
//	}
//	hap = aa[0] + aa[1] + aa[2] + aa[3];
//	printf("합계 ==> %d \n", hap);
//}

//int main()
//{
//	int aa[10];
//	int hap = 0;
//	int i;
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d번째 숫자를 입력하세요: ", i + 1);
//		scanf_s("%d", &aa[i]);
//		hap = hap + aa[i];;
//	}
//	
//	printf("합계 ==> %d \n", hap);
//}

//self study : for => while

//int main()
//{
//	int aa[10];
//	int hap = 0;
//	int i;
//
//	i = 0;
//	while (i < 10)
//	{
//		printf("%d번째 숫자를 입력하세요: ", i + 1);
//		scanf_s("%d", &aa[i]);
//		hap = hap + aa[i];
//		i += 1;
//	}
//	printf("합계 ==> %d\n", hap);
//}

// 배열의 초기화
// 기본8-4

//int main()
//{
//	int aa[4] = { 100,200,300,400 };
//	int bb[] = { 100,200,300,400 };
//	int cc[4] = { 100,200 };
//	int dd[4] = { 0 };
//	int i;
//
//	for (i = 0; i <= 3; i++)
//		printf("aa[%d] ==> % d\t", i, aa[i]);
//	printf("\n");
//
//	for (i = 0; i <= 3; i++)
//		printf("bb[%d]==>%d\t", i ,bb[i]);
//	printf("\n");
//
//	for (i = 0; i <= 3; i++)
//		printf("cc[%d]==<%d\t", i, cc[i]);
//	printf("\n");
//
//	for (i = 0; i <= 3; i++)
//	{
//		printf("dd[%d]==>%d\t", i ,dd[i]);
//	}
//	printf("\n");
//
//}

// 응용 8-5	 100개의 배열 aa를 2의 배수로 초기화한 후 배열 bb에 역순으로 넣기

//int main()
//{
//	int aa[100], bb[100];
//	int i;
//
//	for (i = 0; i < 100; i++)
//	{
//		aa[i] = i * 2;
//	}
//
//	for (i = 0; i < 100; i++)
//	{
//		bb[i] = aa[99 - i];
//	}
//
//	printf("bb[0]는 %d, bb[99]는 %d 입력됨\n", bb[0], bb[99]);
//}


//self study  배열 aa에 3의 배수를 넣고 배열 bb에 aa의 값을 역순으로 넣기

//int main()
//{
//	int aa[50], bb[50];
//	int i;
//
//	for (i = 0; i < 50; i++)
//	{
//		aa[i] = i * 3;
//	}
//	for (i = 0; i < 50; i++)
//	{
//		bb[i] = aa[49 - i];
//	}
//	printf("bb[0]는 %d, bb[49]는 %d 입력됨\n", bb[0], bb[49]);
//}



// 배열의 크기 알아내기, sizeof(배열 이름) /sizeof(배열의 데이터 형식);

// 기본 8-6, 배열의 크기를 계산하는 예

int main()
{
	int aa[] = { 10,20,30,40,50 };
	int count;
	int i;
	int hap = 0;
	count = sizeof(aa) / sizeof(int);

	printf("배열 aa[]의 요소의 개수는 %d 입니다.\n", count);


	for (i = 0; i < count; i++)
	{
		hap = hap + aa[i];
	}

	printf("배열 aa[]에 들어있는 전체 값의 합은 %d 입니다. \n", hap);
}
