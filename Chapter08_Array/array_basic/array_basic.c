// SECTION 01 �迭�� ����

#include<stdio.h>

//int a, b, c, d;
//
//int main()
//{
//	printf("���� ���� �� ���� �Է��ϼ���.\n" );
//	scanf_s("%d %d %d %d", &a, &b, &c, &d);
//
//	printf("%d + %d + %d + %d = %d", a, b, c, d, a + b + c + d);

//int main()
//{
//	int aa[4];
//	printf("���� ���� �� ���� �Է��ϼ���. : \n");
//	scanf_s("%d %d %d %d", &aa[0], &aa[1], &aa[2], &aa[3]);   //scanf���� ���� �Է¹޾� �迭�� Ư����ġ�� ������ ������ &�� ����Ѵ�
//
//	printf("%d + %d + %d + %d = %d \n", aa[0],aa[1], aa[2], aa[3], aa[0]+aa[1]+aa[2]+aa[3]);
//
//
//}



// �迭�� Ȱ����� - ����Ȱ��
// ���� 8-3 for���� �迭�� ÷�ڸ� Ȱ���ϴ� ��

//int main()
//{
//	int aa[4];
//	int hap = 0;
//	int i;
//
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d��° ���ڸ� �Է��ϼ���: ", i + 1);
//		scanf_s("%d", &aa[i]);
//	}
//	hap = aa[0] + aa[1] + aa[2] + aa[3];
//	printf("�հ� ==> %d \n", hap);
//}

//int main()
//{
//	int aa[10];
//	int hap = 0;
//	int i;
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d��° ���ڸ� �Է��ϼ���: ", i + 1);
//		scanf_s("%d", &aa[i]);
//		hap = hap + aa[i];;
//	}
//	
//	printf("�հ� ==> %d \n", hap);
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
//		printf("%d��° ���ڸ� �Է��ϼ���: ", i + 1);
//		scanf_s("%d", &aa[i]);
//		hap = hap + aa[i];
//		i += 1;
//	}
//	printf("�հ� ==> %d\n", hap);
//}

// �迭�� �ʱ�ȭ
// �⺻8-4

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

// ���� 8-5	 100���� �迭 aa�� 2�� ����� �ʱ�ȭ�� �� �迭 bb�� �������� �ֱ�

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
//	printf("bb[0]�� %d, bb[99]�� %d �Էµ�\n", bb[0], bb[99]);
//}


//self study  �迭 aa�� 3�� ����� �ְ� �迭 bb�� aa�� ���� �������� �ֱ�

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
//	printf("bb[0]�� %d, bb[49]�� %d �Էµ�\n", bb[0], bb[49]);
//}



// �迭�� ũ�� �˾Ƴ���, sizeof(�迭 �̸�) /sizeof(�迭�� ������ ����);

// �⺻ 8-6, �迭�� ũ�⸦ ����ϴ� ��

int main()
{
	int aa[] = { 10,20,30,40,50 };
	int count;
	int i;
	int hap = 0;
	count = sizeof(aa) / sizeof(int);

	printf("�迭 aa[]�� ����� ������ %d �Դϴ�.\n", count);


	for (i = 0; i < count; i++)
	{
		hap = hap + aa[i];
	}

	printf("�迭 aa[]�� ����ִ� ��ü ���� ���� %d �Դϴ�. \n", hap);
}
