#include<stdio.h>

int main()
{
	int num = 0;

	if (num > 0) {			// ����, num�� 0���� ũ��
		printf("%d�� 0 ���� ū �� �Դϴ�.\n", num);
	}
	else if (num == 0) {	// �ƴϸ�, ���� num�� 0�� ������
		printf("�Է��� ���� %d �Դϴ�\n", num);
	}
	else {					// �ƴϸ� (ũ���� �ʰ�, ������ ���� ���)
		printf("%d�� 0 ���� ���� �� �Դϴ�.\n", num);
	}
	
	// �ܼ� if ���� �̾ �����ϸ�, ù ��° if �� �� ��° if �� ���ÿ� ����� ���� �ִ�

	printf("���� �Է� : ");
	scanf("%d", &num);

	if (num % 3 == 0)
		printf("%d�� 3�� ����Դϴ�\n", num);
	if (num % 5 == 0)
		printf("%d�� 5�� ����Դϴ�\n\n", num);

	printf("[if ~ else if] �� ó���ϸ�\n\n");

	if (num % 3 == 0)
		printf("%d�� 3�� ����Դϴ�\n\n", num);
	else if (num % 5 == 0)
		printf("%d�� 5�� ����Դϴ�\n\n", num);

	printf("[if �ȿ� �� �ٸ� if] �� ó���ϸ�\n\n");

	if (num % 3 == 0) {
		printf("%d�� 3�� ����Դϴ�\n", num);
		if (num % 5 == 0)
			printf("%d�� 5�� ����Դϴ�\n\n", num);
	}
}