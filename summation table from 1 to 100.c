#include<stdio.h>

// for���� �̿��� 1���� 100���� ����ؼ� ���ϴ� ���� ���̺� �������� cmd â���� ���̰� �ϴ� ��
// ������ 2�г� c��� ���� ���� �ٽ� Ǯ� ��

int getSum(int n) {
	// ����� ������ ������ ���� ó��
	if (n <= 0) {
		printf("����� �Է����ּ���");
		exit(-1);
	}
	return n*(n+1)/2;
}

void main() {
	printf("summation table from 1 to 100\n");

	int k = 1;

	for (int i = 0; i < 10; i++) {
		// ���̺� ��� ���
		putchar('+'); // printf ������� ���� �ϼż�
		
		for (int j = 0;j < 10;j++)
			printf("-----+");

		putchar('\n'); // ���� 2�� for ���� ������ �� ���

		putchar('|');

		// ���� ��� + ���̺� ��� ���� ���� �߰�
		for (int j = 0;j < 10;j++)
			printf("%5d|", getSum(k++));

		putchar('\n');
	}
	// ������ �� ���̺� ��� ���
	putchar('+');
	for (int j = 0;j < 10;j++)
		printf("-----+");

	putchar('\n');

}