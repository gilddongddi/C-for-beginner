//0���� ������ �������� ���� 

//#include<stdio.h>
//
//int main()
//{
//	int a, b ;
//	char k;
//	int result;
//
//	printf("ù ��° ����� �� ==> ");
//	scanf("%d", &a);
//
//	printf("+ - * / %% ==> ");
//	scanf(" %c", &k);					// %c �տ� �ݵ�� ������ ���� ��
//
//	printf("�� ��° ����� �� ==>");
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
//			printf("0���� ������ �ȵ˴ϴ�.");
//	}
//	if (k == '%')
//	{
//		if (b != 0)
//		{
//			result = a % b;
//			printf("%d %% %d = %d ", a, b, result);
//		}
//		else
//			printf("0���� ������ �ȵ˴ϴ�.");
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
//	printf("%s %s \n", "�ȳ�", "Hello");
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
	printf("\n�� �ٲ�\n����\n");
	printf("\t��Ű\t����\n");
	printf("�̰���\r����ϴ�.\n");
	printf("\a\a\a�߼Ҹ� 3�� \n");
	printf("���ڰ� \"����\"�Ǵ� ȿ��\n");
	printf("\\\\\\ �������� ���� ��� \n");
}