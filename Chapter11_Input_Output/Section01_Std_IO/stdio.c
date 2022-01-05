// SECTION 01 표준 입출력 함수

//기본 11-1, 서식화된 입출력 함수 사용 예

//#include<stdio.h>
//
//void main()
//{
//	int a;
//	float b;
//	char ch;
//	char s[20];
//
//	printf("정수를 입력 : ");
//	scanf_s("%d", &a);
//	printf("실수를 입력 : ");
//	scanf_s("%f", &b);
//	printf("문자를 입력 : ");
//	scanf_s(" %c", &ch, 1);				// scanf와 달리 scanf_s로 문자나 문자열 입력할 때는 입력받을 문자 수까지 매개변수를 3개 넣어야 함. 문자열은 null문자 고려 -1해야 함
//	printf("문자열을 입력 : ");
//	scanf_s("%s", s, 20);
//
//	printf("\n정수의 10진수 ==> %d\n", a);
//	printf("정수의 16진수 ==> %X\n", a);
//	printf("정수의 8진수 ==> %o\n", a);
//	printf("실수  ==> %10.3f\n", b);
//	printf("실수(공학용)==> %e\n", b);
//	printf("문자  ==> %c\n", ch);
//	printf("문자열 ==> %s\n", s);
//}



// 기본 11-2 문자열 입출력 함수 사용 예
//#include<stdio.h>
//
//void main()
//{
//	char s[20];
//
//	printf("문자열을 입력 : ");
//	gets(s);
//
//	puts(s);
//}


// 기본 11-3 문자 입출력 함수 사용 예1
//#include<stdio.h>
//
//void main()
//{
//	char ch;
//
//	ch = getch();
//	putch(ch);
//
//	ch = getch();
//	putch(ch);
//
//	ch = getch();
//	putch(ch);
//}



// 응용 11-4 문자 입출력 함수 사용 예 2 : getch()

//#include <stdio.h>
//#include <string.h>
//
//void main()
//{
//	char password[5] = "1234";		// {5,6,7,8,\0}  문자형은 null값 포함해서 5임  vs 정수형 배열은 null값 없음
//	char input[5];
//	int i;
//
//	//printf("%d\n", strcmp(password, input));
//
//	printf("비밀번호는 %s :\n", password);
//
//	printf("비밀번호 4 글자를 입력하세요 :");
//	for (i = 0; i < 4; i++)
//		//input[i] = getche();
//		input[i] = getch();			// getch()함수는 문자를 한글자씩 보이지 않게 입력받음  vs getche()는 한글자씩 보여주면서 입력받음
//
//	printf("\n입력한 비밀번호는 %s \n", input);  // 안 된다. 입력한 비밀번호에 자꾸 쓰레기글자들이 낀다. 해결할 방법이 있을텐데?
//
//	if (strcmp(password, input) == 0) 
//	{
//		printf("\n비밀번호 일치합니다.\n");
//	}
//	else
//	{
//		printf("\n입력한 비밀번호 ");
//
//		for (i = 0; i < 4; i++)
//			putch(input[i]);
//		printf("가 틀렸습니다.\n");
//	}
//}


// 기본 11-5 문자 입출력 함수 사용 예 3 , getche(); ==> 문자 한 글자씩 입력받고 모니터에 보여준다.

//#include<stdio.h>
//
//void main()
//{
//	char ch;
//
//	ch = getche();
//	ch = getche();
//	ch = getche();
//
//}


// 기본 11-6 문자 입출력 함수 사용 예 4, getchar();
#include<stdio.h>

void main()
{
	char ch;

	printf("문자열을 입력하세요 : ");
	ch = getchar();			// 문자를 입력받아 버퍼(임시저장소)에 저장 후 첫 글자를 ch 변수에 저장
	putchar(ch);			// ch 변수값 출력

	ch = getchar();			// 문자를 버퍼에서 한글자 빼서 ch에 저장
	putchar(ch);			// ch 변수값 출력

	ch = getchar();			// 문자를 버퍼에서 한글자 빼서 ch에 저장
	putchar(ch);			// ch 변수값 출력

	ch = getchar();			// 만약 여기서(3글자만 입력 후) 엔터키를 치면 , 엔터키값이 버퍼에 저장된 후 ch변수에 대입되고 출력 => 줄바뀜
	putchar(ch);

	ch = getchar();			// 여기에서 한글자를 더 입력받을 수 있아 출력할 수 있음. 그냥 엔터키를 치켠 엔터키값이 저장된 후 반환되서 줄바뀌고 끝.
	putchar(ch);

}
