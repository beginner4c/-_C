#include<stdio.h>

void main() {
	unsigned int x = 128, y;
	int count;

	printf("�ʱⰪ ���� �̵� ��� \n");
	
	for (count = 1; count <= 4;count++) {
		y = x << count;

		printf("%4d%6d%10d\n", x, count, y);
	}

	printf("\n �ʱⰪ ������ �̵� ���\n");

	for (count = 1;count <= 4;count++) {
		y = x >> count;

		printf("%4d%6d%10d\n", x, count, y);
	}
}