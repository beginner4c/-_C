#include <stdio.h>

int main()
{
	// �ݺ��� (for) : Ƚ���� ���� �ݺ��� ó���ϱ� ���� ���

	// while ���� Ȱ���� 5 ȸ �ݺ���

	int i = 0;
	while (i < 5) {
		printf("Hello, world !!\n");
		i++;
	}
	printf("\n");
	// for ���� Ȱ���� 5 ȸ �ݺ���

	for (int i = 0; i < 5; i++) {
		printf("Hello, world !!\n");
	}
	printf("\n");
	/*
					1					2				4
		for (���� ���� �� �ʱ�ȭ; �ݺ��� ������ ����; ������) {
			���๮ ;
			   3
		}

		���� ���ڴ� ���� ����
		1 - 2 - 3 - 4 - 2 - 3 - 4 - 2 - 3 - 4 - 2(false) - break;
	*/
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += i;
	}
	printf("sum : %d\n", sum);
	printf("\n");
	// 1. 1 ���� 100 ������ ���� for ���� �̿��Ͽ� ���ϼ���

	sum = 0;

	for (int an = 0; an <= 100; an++) {
		sum += an;
	}
	printf("1 ~ 100 sum = %d\n", sum);
	printf("\n");

	// 2. 1 ���� 100 ������ ¦���� ���� ���ϼ���

	sum = 0;

	for (int bn = 0; bn <= 100; bn++) {
		if (bn % 2) {
			sum += bn;
		}
}
	printf("1 ~ 100 ¦�� sum = %d\n", sum);
	printf("\n");

	// 3. ����ڿ��� ������ �Է� �޾Ƽ�, �Է¹��� Ƚ�� ��ŭ
	//		���ڿ��� ����ϼ���(���ڿ��� ������ ����)

	int any;

	printf("���� �ƹ��ų� �Է������ : ");
	scanf("%d", &any);

	for (int cn = 0; cn < any; cn++) {
		printf("\n�����ٶ󸶹ٻ�?%d\n", cn);
	}

	printf("\n");
	// �ݺ� Ƚ���� ó���ϴ� ������ for �� �ۿ��� �����ϸ� for ���� ���� ���Ŀ� ���� ������ �� �ִ�.

	int j;

	for (j = 0; j < 5; j++) {
		printf("%d", j);
	}
	printf("j : %d\n", j);
	printf("\n");

	// �ݺ� Ƚ���� ó���ϴ� ������ for �� ���ο��� �����ϸ� for ���� ������ ��� ������ �Ҹ��Ѵ�
	for (int k = 0; k < 5; k++) {
		printf("%d\n", k);
	}
	printf("\n");
	 //printf("k : %d\n", k);		// for �� ������ �����鼭 k ������ �����

	// 1 ���� 20 ���� �� �ٿ� ����ϱ�
	for (int i = 0; i < 20; i++) {
		printf(" %d ", i + 1);
	}
	printf("\n");

}