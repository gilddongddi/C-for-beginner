// SECTION 01 �޸� �Ҵ� �Լ�


// �⺻ 12-1 �����͸� ����Ͽ� ���� �հ� ���ϱ�

//#include<stdio.h>
//
//int main()
//{
//	int aa[3];
//	int* p;
//	int i, hap = 0;
//
//	for (i = 0; i < 3; i++)
//	{
//		printf(" %d ��° ���� : ", i + 1);
//		scanf("%d", &aa[i]);
//	}
//
//	p = aa;
//
//	for (i = 0; i < 3; i++)
//		hap = hap + *(p + i);
//
//	printf("�Է� ������ �� => %d\n", hap);
//}




//�⺻ 12-2 ������ ũ���� �迭�� ���� �޸� ������ ��

//#include<stdio.h>
//int main()
//{
//	int aa[10000];
//	int* p;
//	int i, hap = 0;
//	int cnt;
//
//	printf(" �Է��� ������ ? ");
//	scanf("%d", &cnt);
//
//	for (i = 0; i < cnt; i++)
//	{
//		printf("%d ��° ���� : ", i + 1);
//		scanf("%d", &aa[i]);
//	}
//
//	p = aa;
//
//	for (i = 0; i < cnt; i++)
//	{
//		hap = hap + *(p + i);
//	}
//
//	printf("�Է� ������ �� ==> %d\n", hap);
//}


// malloc() �Լ� ������� :  ������ ���� = (������ ������ ������Ÿ��*) malloc(������ ������ �������� ũ�� x �ʿ��� ũ��)

//���� 12-3 
//#include<stdio.h>
//#include<malloc.h>  //�޸� ���� �Լ��� ����� �� �߰�
//
//int main() {
//	int* p;
//	int i, hap = 0;
//	int cnt;
//
//	printf(" �Է��� ������ ? ");
//	scanf("%d", &cnt);
//
//	p = (int*)malloc(4 * cnt);					// �Է��� ������ ������ŭ �޸� �Ҵ��ϰ� ���� �ּҸ� ������ ���� p�� ����
//	//p=(int*)malloc(sizeof(int)*cnt);
//
//	for (i = 0; i < cnt; i++)
//	{
//		printf(" %d ��° ���� : ", i + 1);
//		scanf("%d", p + i);   //  &p[i]�� ���� , �����Ͱ� ����� �ּҸ� ��� �ϹǷ�, *(p+i) �� �ȵ�.   
//	}
//
//	for (i = 0; i < cnt; i++)
//	{
//		hap = hap + *(p + i);
//	}
//	printf("�Է� ���� �� ==> %d\n", hap);
//
//	free(p);									//�޸� ����
//}




//self study ������ �ƴ� �Ǽ��� Ǯ���
// 
//#include<stdio.h>
//#include<malloc.h>  //�޸� ���� �Լ��� ����� �� �߰�
//
//int main() {
//	float* p;						// ������ ������ ������ Ÿ���� �������� ������Ÿ���� ����Ѵ�. 
//	int i;
//	int cnt;
//	float hap = 0;
//
//	printf(" �Է��� ������ ? ");
//	scanf("%d", &cnt);
//
//	p = (int*)malloc(4 * cnt);					// �Է��� ������ ������ŭ �޸� �Ҵ��ϰ� ���� �ּҸ� ������ ���� p�� ����
//	//p=(int*)malloc(sizeof(int)*cnt);
//
//	for (i = 0; i < cnt; i++)
//	{
//		printf(" %d ��° ���� : ", i + 1);
//		scanf("%f", p + i);   //  &p[i]�� ���� , �����Ͱ� ����� �ּҸ� ��� �ϹǷ�, *(p+i) �� �ȵ�.   
//	}
//
//	for (i = 0; i < cnt; i++)
//	{
//		hap = hap + *(p + i);
//	}
//	printf("�Է� ���� �� ==> %f\n", hap);
//
//	free(p);									//�޸� ����
//}


// �⺻ 12-4 calloc() : ó������ 0���� �ʱ�ȭ�� �޸� Ȯ���ϰ� ���� ��. clear allocate

//#include<stdio.h>
//#include<malloc.h>
//
//int main()
//{
//	int* p, * s;
//	int i, j;
//
//	printf("malloc() �Լ� ��� \n");
//	p = (int*)malloc(sizeof(int) * 3);
//
//	for (i = 0; i < 3; i++)
//		printf("�Ҵ�� ���� �ʱⰪ p[%d] ==> %d\n", i, p[i]);			// �����Ⱚ�� ����Ǿ� ����
//
//	free(p);
//
//	printf("\ncalloc() �Լ� ���\n");
//	s = (int*)calloc(sizeof(int), 3);					//malloc()�� ������ �ٸ�. ������Ÿ��ũ��� ������ �Ű������� �����
//
//	for (j = 0; j < 3; j++)
//		printf("�Ҵ�� ���� �ʱⰪ s[%d]==>%d\n", j, s[j]);				// �ʱⰪ�� ��� 0
//
//	free(s);
//}





// ���� 12-5, realloc() �Լ�, re-allocate
#include<stdio.h>
#include<malloc.h>

int main()
{
	int* p;
	int i, hap = 0;
	int cnt = 0;								// ���ڸ� �� �� �Է��ߴ��� ���� ����
	int data;									// �Է��� ���ڸ� �ӽ÷� �����ϴ� ����

	p = (int*)malloc(sizeof(int) * 1);			// 1��° ���ڸ� ���� �޸𸮸� �Ҵ��ϰ� �ּҸ� ������ ���� p�� ����
	printf(" 1 ��° ���� : ");
	scanf("%d", &p[0]);
	cnt++;

	for (i = 2; ; i++)
	{
		printf(" %d ��° ���� : ", i);			// 2��° ���ں��� �Է¹޾� data ������ �����ϰ�, �Է°��� 0�� �ƴϸ� �޸� ����� ���ڰ�����ŭ �÷���
		scanf("%d", &data);

		if (data != 0)
			p = (int*)realloc(p, sizeof(int) * i);
		else
			break;

		p[i - 1] = data;						// data ���� p[1]���� 0�� �Է��ϱ� ������ �������� ����
		cnt++;
	}

	for (i = 0; i < cnt; i++)					// ���Ե� ������ ���� p[0]���� p[cnt-1]���� �ջ�
		hap = hap + p[i];

	printf("�Է� ���� �� ==> %d\n", hap);

	free(p);									// �۾��� ���� �� �޸� ��ȯ
}
