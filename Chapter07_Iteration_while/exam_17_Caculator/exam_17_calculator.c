// exam17: ����� �հ踦 ���ϴ� ����

//���� ���� - �Է��� �� �� ������ �հ踦 ���ϵ� ���ϴ� ����� �����ϴ� ���α׷��̴�. ���� ��� 100~200
//�߿��� 4 ����� �հ踦 ���� �� �ִ�.

#include<stdio.h>

int main()
{
	int start, end;
	int basu, i;
	int hap = 0;

	printf("�հ��� ���۰�==> :");
	scanf_s("%d", &start);
	
	printf("�հ��� ���� ==> : ");
	scanf_s("%d", &end);

	printf("��� ���� ==> : ");
	scanf_s("%d" ,&basu);

	i = start;
	while (i<=end)
	{
		if(i%basu==0)		
			hap = hap + i;

		i++;
		
	}
	printf("1~100���� ������ %d�� ����� ���� %d �Դϴ�.\n", basu,hap);

}