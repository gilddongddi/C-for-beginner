// �⺻ 10-7, ��ȯ�� ������ ���� �Լ� ��

//#include<stdio.h>
//
//void func1()
//{
//	printf("void �� �Լ��� �����ٰ� ����. \n");
//}
//
//int func2()
//{
//	return 100;
//}
//
//int main()
//{
//	int a, b;
//
//	func1();
//	//a = func1();   // void������ ���� intŸ�� ������ ������ ���� ����
//	
//	//char c = func1();  // void ������ ���� charŸ�� �������� ������ ���� ����. ��� ���Ŀ��� void�� ����� �� ���ٰ� ����
//
//	b = func2();
//
//	printf("int �� �Լ����� ������ �� ==> %d\n", a);
//	// printf("void �� �Լ����� ������ �� ==> %d\n", b);		// ���� �̰Ŵ� �Ұ���.
//}


// �Ű����� ���� ���

// 1. ������ ����

//#include<stdio.h>
//
//void func1(int a)
//{
//	a = a + 1;
//	printf("���޹��� a==> %d\n", a);
//}
//
//void main()
//{
//	int a = 10;
//
//	func1(a);   //�Ű������� ��(10)���� ����
//	printf("func1() ���� ���� a ==> %d\n", a);		//func1()�Լ� ȣ�� �� ������ a ���� 10�� ���. ���� �����ذ��� �� ���� �����Ͱ����� ������ ��ġ�� ����
// 
//}

//2. �ּҷ� ����  �⺻10-9

//#include<stdio.h>
//
//void func1(int* a)
//{
//	*a = *a + 1;
//	printf("���޹��� a ==> %d\n", *a);
//}
//
//void main()
//{
//	int a = 10;
//
//	func1(&a);			// �Ű������� �ּҷ� ����
//	printf("func1() ���� ���� a ==> %d\n", a);		// func1()�Լ����� ���޹��� �ּ��� �������� ������ѹ��� 11�� ���
//}



// ����10-10, �Ű����� ���� ��� ��

#include<stdio.h>

void func1(char a, char b)
{
	int tmp;

	tmp = a;
	a = b;
	b = tmp;

}

void func2(char* a, char* b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void main()
{
	char x = 'A', y = 'Z';

	printf("���� ��  : x=%c, y=%c\n", x, y);

	func1(x, y);
	printf("���� ������ �� : x=%c, y=%c\n", x, y);

	func2(&x, &y);
	printf("�ּҸ� ������ �� : x=%c, y=%c\n", x, y);
}