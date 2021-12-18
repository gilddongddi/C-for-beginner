#include <stdio.h>

int main(void) {

	// �⺻ 4-8: ��Ʈ ���� ������ ��� ��
	printf("//�⺻ 4-8 ��Ʈ ���� ������ ��� ��\n");
	printf(" 10 & 7 = %d \n", 10 & 7);
	printf(" 123 & 456 = %d \n", 123 & 456);
	printf(" 0xFFFF & 0000 = %d \n", 0xFFFF & 0000);

	printf("\n");
	printf("\n");

	// �⺻ 4-9: ��Ʈ ���� ������ ��� ��
	printf("// �⺻ 4-9 ��Ʈ ���� ������ ��� ��\n");
	printf(" 10 | 7 = %d \n", 10 | 7);
	printf(" 123 | 456 = %d \n", 123 | 456);
	printf(" 0xFFFF | 0000 = %d \n", 0xFFFF | 0000);
	printf(" 0xFFFF | 0000 = %x \n", 0xFFFF | 0000);
	printf(" 0xFFFF | 0000 = %o \n", 0xFFFF | 0000);

	printf("\n");
	printf("\n");

	//�⺻ 4-10: ��Ʈ ��Ÿ�� ���� ������ ��� ��
	printf("//�⺻ 4-10: ��Ʈ ��Ÿ�� ���� ������ ��� ��\n");
	printf(" 10 ^ 7 = %d \n", 10 ^ 7);
	printf(" 123 ^ 456 = %d \n", 123 ^ 456);
	printf(" 0xFFFF ^ 0000 = %d \n", 0xFFFF ^ 0000);

	printf("\n");
	printf("\n");

	//���� 4-11: ��Ʈ ���꿡 ����ũ�� ����� ��
	printf("/���� 4-11: ��Ʈ ���꿡 ����ũ�� ����� ��\n");

	char a = 'A', b, c;
	char mask = 0x0F;

	printf(" %x & %x = %x \n", a, mask, a & mask);
	printf(" %x | %x = %x \n", a, mask, a | mask);

	mask = 'a' - 'A';

	b = 'A' ^ mask;
	printf(" %d ^ %d = %c \n", a, mask, b);

	a = 'a' ^ mask;
	printf(" %c ^ %d = %c \n", b, mask, a);

}