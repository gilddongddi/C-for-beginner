//0으로 나눠도 오류없는 계산기 

//#include<stdio.h>
//
//int main()
//{
//	int a, b ;
//	char k;
//	int result;
//
//	printf("첫 번째 계산할 값 ==> ");
//	scanf("%d", &a);
//
//	printf("+ - * / %% ==> ");
//	scanf(" %c", &k);					// %c 앞에 반드시 공백이 들어가야 함
//
//	printf("두 번째 계산할 값 ==>");
//	scanf("%d", &b);
//
//	if (k == '+')
//	{
//		result = a + b;
//		printf("%d + %d = %d", a, b, result);
//	}
//	if (k == '-')
//	{
//		result = a - b;
//		printf("%d - %d = %d", a, b, result);
//	}
//	if (k == '*')
//	{
//		result = a * b;
//		printf("%d * %d = %d", a, b, result);
//	}
//	if (k == '/')
//	{
//		if (b != 0)
//		{
//			result = a / b;
//			printf("%d / %d = %d", a, b, result);
//		}
//		else
//			printf("0으로 나누면 안됩니다.");
//	}
//	if (k == '%')
//	{
//		if (b != 0)
//		{
//			result = a % b;
//			printf("%d %% %d = %d ", a, b, result);
//		}
//		else
//			printf("0으로 나누면 안됩니다.");
//	}
//}



//self study

//#include<stdio.h>
//
//int main()
//{
//	int a, b;
//	int result;
//	float result2;
//
//	a = 100;
//	b = 200;
//
//	result = a + b;
//	printf("%d + %d = %d\n", a, b, result);
//
//	result2 = a / b;
//	printf("%d / %d = %.1f", a, b, result2);
//}


//#include<stdio.h>
//
//int main()
//{
//	printf("%d / %d = %.1f\n", 100, 200, 0.5);
//	printf("%c %c \n", 'a', 'K');
//	printf("%s %s \n", "안녕", "Hello");
//
//}


//#include<stdio.h>
//
//int main()
//{
//	printf("%d\n", 123);
//	printf("%5d\n", 123);
//	printf("%05d\n", 123);
//	printf("\n");
//	printf("%f\n", 123.45);
//	printf("%7.1f\n", 123.45);
//	printf("%7.3f\n", 123.45);
//	printf("\n");
//	printf("%s\n", "Basic-C");
//	printf("%10s\n", "Basic-C");
//}

#include<stdio.h>

int main()
{
	printf("\n줄 바꿈\n연습\n");
	printf("\t탭키\t연습\n");
	printf("이것을\r덮어씁니다.\n");
	printf("\a\a\a삐소리 3번 \n");
	printf("글자가 \"강조\"되는 효과\n");
	printf("\\\\\\ 역슬래시 세개 출력 \n");
}