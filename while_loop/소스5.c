#include <stdio.h>

int main()
{
	// ����ڿ��� 10 ������ ������ �Է¹޾Ƽ�
	// 1 ���� 100 ������ �Է¹��� ���� ����� ����ϴ� �ڵ带 �ۼ�

	int num, gob, result;

	while (1) {
		printf("������ �Է��ϼ��� (1 ~ 10) : ");
		scanf("%d", &num);

		if (1 <= num && num <= 10) {		//���ǿ� �´� �����̸� ������ �ߴ�
			break;
		}
		printf("������ ������ϴ�, �ٽ� �Է��ϼ���\n");
	}

	result = 1;

	while (result <= 100) {
		result++;
		if (result % num == 0) {
			printf(" %d ", result);
		}
	}
}