#include <stdio.h>

int main()
{
	int a = 7, b = 10, c = 1, d = 0;

	// ���� ���� ����

	c = a++ + ++b;
	d = a-- - b++;

	printf("a : %d, b : %d, c : %d, d : %d\n", a, b, c, d);

	// ���� ���� ���� + ũ�� �� + �� ����

	c = ++a >= b-- && --c != d++;
	d = a + b < 0 || a++ == 0;
	
	printf("a : %d, b: %d, c : %d, d: %d\n", a, b, c, d);


	// �� ������ ó�� ����

	c = a < b || a++ + ++b;
	printf("a %d, b :%d, c : %d, d : %d\n", a, b, c, d);

	c = a < b && a++ + ++b;
	printf("a %d, b :%d, c : %d, d : %d\n", a, b, c, d);

}