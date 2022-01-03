// SECTION 01 함수의 이해

// 1 함수의 개념

// 기본 10-1 직접 커피를 서비스하는 과정의 예 - 커피를 타는 1회의 과정
//#include<stdio.h>
//
//int main()
//{
//	int i;
//	char s[3] = { 'A', 'B', 'C' };    // 세명의 손님으로 한정하여 서비스
//
//	for (i = 0; i < 3; i++)
//	{
//		int coffee;
//
//		printf(" %c 손님 어떤 커피 드릴까요? (1:보통, 2:설탕, 3:블랙) ",s[i] );
//		scanf_s("%d", &coffee);
//
//		printf("\n# 1. 뜨거운 물을 준비한다. \n");
//		printf("# 2. 종이컵을 준비한다. \n");
//
//		switch (coffee)
//		{
//		case 1: printf("# 3. 보통커피를 탄다. \n"); break;
//		case 2: printf("# 3. 설탕커피를 탄다. \n"); break;
//		case 3: printf("# 3. 블랙커피를 탄다. \n"); break;
//		default: printf("# 3. 아무거나 탄다. \n"); break;
//		}
//
//		printf("# 4. 물을 붓는다. \n");
//		printf("# 5. 스푼으로 저어서 녹인다.\n\n");
//
//		printf(" %c 손님~ 커피 여기 있습니다. \n\n", s[i]);
//	}
//}



// 커피자판기(함수)를 만들어보자. 기본10-2

//#include<stdio.h>
//
//int coffee_machine(int button)				// 커피 자판기 함수 구현
//{
//	printf("\n# 1. 뜨거운 물을 준비한다. \n");
//	printf("# 2. 종이컵을 준비한다. \n");
//
//	switch (button)
//	{
//	case 1: printf("# 3. 보통커피를 탄다. \n"); break;
//	case 2: printf("# 3. 설탕커피를 탄다. \n"); break;
//	case 3: printf("# 3. 블랙커피를 탄다. \n"); break;
//	default: printf("# 3. 아무거나 탄다. \n"); break;
//	}
//
//	printf("# 4. 물을 붓는다. \n");
//	printf("# 5. 스푼으로 저어서 녹인다.\n\n");
//
//	return 0;
//}
//
//int main()
//{
//	int coffee;
//	int ret;		//반환값 변수. ?
//
//	printf("어떤 커피를 드릴까요? (1:보통, 2:설탕, 3:블랙)");
//	scanf_s("%d", &coffee);
//
//	ret = coffee_machine(coffee);  // 커피자판기 함수 호출
//
//	printf("손님~ 커피 여기 있습니다. \n\n");
//
//}





// 여러 명에게 주문을 받도록 변경. 기본 10-3
//#include<stdio.h>
//
//int coffee_machine(int button)				// 커피 자판기 함수 구현
//{
//	printf("\n# 1. 뜨거운 물을 준비한다. \n");
//	printf("# 2. 종이컵을 준비한다. \n");
//
//	switch (button)
//	{
//	case 1: printf("# 3. 보통커피를 탄다. \n"); break;
//	case 2: printf("# 3. 설탕커피를 탄다. \n"); break;
//	case 3: printf("# 3. 블랙커피를 탄다. \n"); break;
//	default: printf("# 3. 아무거나 탄다. \n"); break;
//	}
//
//	printf("# 4. 물을 붓는다. \n");
//	printf("# 5. 스푼으로 저어서 녹인다.\n\n");
//
//	return 0;
//}
//
//int main()
//{
//	int coffee;
//	int ret, i;
//
//	char s[3] = { 'A','B','C' };
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("%c 님 어떤 커피 드릴까요? (1:보통, 2:설탕, 3:블랙)", s[i]);
//		scanf_s("%d", &coffee);
//
//		ret = coffee_machine(coffee);
//		printf("%c 님 커피 여기 있습니다. \n\n", s[i]);
//
//	}
//}


// 2 함수의 모양과 활용

// 기본10-4, 두 정수를 입력받아 합계를 반환하는 plus()함수를 만들어보자

//#include<stdio.h>
//
//int plus(int v1, int v2)
//{
//	int result;
//	result = v1 + v2;
//	return result;
//}
//
//
//int main()
//{
//	int hap;
//	hap = plus(100, 200);
//
//	printf("100과 200의 plus() 함수 결과는 : %d\n", hap);
//}



// 응용 10-5, 입력한 두 숫자의 사칙연산을 하는 계산기 함수를 사용한 프로그램

#include<stdio.h>

int calc(int v1, int v2, int op)
{
	int result;

	switch (op)
	{
	case 1: result = v1 + v2; break;
	case 2: result = v1 - v2; break;
	case 3: result = v1 * v2; break;
	case 4: result = v1 / v2; break;
	default: printf("잘못 눌렀어요. 다시 입력하세요.\n");
	}
	return result;
}



int main()
{
	int res;
	int oper, a, b;

	printf("계산입력(1:+, 2:-, 3:*, 4:/) : ");
	scanf_s("%d", &oper);

	printf("계산할 두 숫자를 입력 : ");
	scanf_s("%d %d", &a, &b);

	res = calc(a,b,oper);  // 함수를 호출하려면 함수에서 정의된 매개변수에 대응되도록 변수를 입력하여야 한다.

	printf("계산결과는 : %d\n", res);
}
