//***�Էµ� �� �Ǽ��� ��� ����***
//�Ǽ��� �Է¹޾� �� ���� �پ��� ������ ����ϴ� ���α׷��̴�.
//��Ʈ_ �������� ���� ���� ���� �� ��ȯ�� ����Ѵ�.

#include<stdio.h>

int main()
{
	float a, b;
	float result;

	printf("ù ��° ����� ���� �Է��ϼ��� ==> ");
	scanf("%f", &a);
	printf("�� ��° ����� ���� �Է��ϼ��� ==> ");
	scanf("%f", &b);

	result = a + b;
	printf("\n%5.2f + %5.2f = %5.2f \n", a, b, result);

	result = a - b;
	printf("%5.2f - %5.2f = %5.2f \n", a, b, result);

	result = a * b;
	printf("%5.2f * %5.2f = %5.2f \n", a, b, result);

	result = a / b;
	printf("%5.2f / %5.2f = %5.2f \n", a, b, result);

	result=(int)a % (int)b;
	printf("%d %% %d = %d \n", (int)a, (int)b, result);

}



