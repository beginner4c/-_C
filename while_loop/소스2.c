#include <stdio.h>
// while ���� Ȱ���ؼ� �ذ��ϼ���
int main()
{
	printf("1.\n\n");
	// 1. ITBANK ���ڿ��� 5 �� ����ϼ���
	int st = 0;

	while (st < 5) {
		printf("ITBANK\n");
		st++;
	}

	printf("\n2.\n\n");
	// 2. 1 ���� 5 ������ ���ڸ� �� �ٿ� ����ϼ���
	int num = 1;

	while (num <= 5) {
		printf(" %d ", num);
		num++;
	}

	printf("\n\n3.\n\n");
	// 3. 1 ���� 10 ������ ������ ���� ����ϼ���
	int num1 = 1, sum = 0;

	while (num1 <= 10) {
		sum = num1 + sum;
		num1++;
	}
	printf("������ �� : %d", sum);

	printf("\n\n4.\n\n");
	// 4. 1 ���� 100 ������ ���� �� Ȧ���� ���� ����ϼ���
	int pass, num2;

	num2 = 1;
	pass = 0;

	while (num2 <= 100) {
		if (num2 % 2)
			pass += num2;
		num2++;
	}

	printf("1���� 100�� Ȧ���� �� : %d", pass);

	printf("\n\n5.\n\n");
	// 5. ���ĺ� 'A' ���� 'Z' ������ ���ڸ� �������� �����Ͽ� �� �ٿ� ����ϼ���

	int ch = 'A';

	while (ch <= 'Z') {
		printf("%c", ch);
		ch++;
	}
	printf("\n\n");
}