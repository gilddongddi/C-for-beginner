// ��������21 �빮�ڿ� �ҹ��� ��ȯ

//�ƽ�Ű�ڵ�� �빮�ڿ� �ҹ��ڿ��� ���� ���̸� ���ϰ� ���� ������� ����

#include<stdio.h>
#include<string.h>

int main()
{

	//printf("%d %d", 'a', 'A'); // 'a'= 97, 'A'= 65 

	char in[50], out[50];
	int i, len;
	int diff = 'a' - 'A'; 

	printf("���� �Է� : ");
	gets(in);

	len = strlen(in);  // �Է¹��� ���ڿ��� ����

	for (i = 0; i < len; i++)   // ���ڿ��� ��ȸ�ϸ鼭 �빮���̸� �ҹ��ڿ��� ���̰��� ���ϰ�, �ҹ����̸� ���̰��� ����
	{
		if((in[i]>='A') && (in[i]<='Z'))
			out[i] = in[i]+diff;

		else if((in[i]>='a') && (in[i]<='z'))
			out[i] = in[i]-diff;

		else
			out[i] = in[i];
	}
	out[i] = '\0';

	printf(" ��ȯ�� ���� => %s \n", out);
}