#include<stdio.h>

int main()
{
	// ������ ��ü�� ����ϴ� �ڵ�

	int dan = 2;

	// 2 �� for �� : for �� ���� �� �ٸ� for ���� �����Ͽ� �ݺ��� �ݺ��ϱ�

	for (int dan = 2; dan < 10; dan++) {		// ū �ݺ�(��)
		for (int i = 1; i < 10; i++) {			// ���� �ݺ�(�� �ȿ����� �� ��)
			printf("%d x %d = %d\n", dan, i, dan * i);
		}
	}
	printf("\n");

	char ch = '*';

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%c ", ch);		// ���ǿ� ���� ���ڸ� 5 �� �ۼ� (* * * * *)
		}
		printf("\n");		//���� for ���� ������ ������� ���� �� ������ ���� �ݺ�
	}
	printf("\n");
	/*
		i		j		result(i % 5 + j + 1)
		----------------------------------------
		0		0		1
		0		1		2
				2		3
				3		4
				4		5
		1		0		6
				1		7
				2		8
				3		9
				4		10
	*/

	printf("\n\n");

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == 0 || i == 4 || j == 0 || j == 4)
				printf("%s ", "��");		// �ѱ� '��' ���� ���� + Pagedown 1 + 5 �� ����
			else
				printf("   ");
		} printf("\n");
	} printf("\n");
	printf("\n\n");

	int num = 1;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%2d ", num++);
		} printf("\n");
	}printf("\n");

	// ����. 5 x 5 �� �׸����� �ƹ� ���ڸ� ����� ��
	//		������ ��ü �׸��� x �� ��Ÿ������ ����ϼ���

	int x, y;

	for (int x = 0; x < 5; x++) {
		for (int y = 0; y < 5; y++) {
			if (x == y) {
				printf("? ");
			}
			else if (x + y == 4) {
				printf("? ");
			}
			else
				printf("  ");
		} printf("\n");
	} printf("\n");
}