#include<stdio.h>

int main()
{
	// ����, ����ڿ��� 2 ~ 9 ������ ������ �Է¹޾Ƽ�
	// �ش� ������ �������� ����ϴ� �ڵ带 �ۼ��ϼ���

	int x, y, re = 0;

	// while Ȥ�� do ~ while �� Ƚ���� ������� �ݺ��� ����
	do {
		printf("2 ~ 9 ������ ������ �Է� ���� : ");
		scanf("%d", &x);			// scanf�� ��û�ϰ� \n ���̴� �Ǽ� ���� ����
	} while (x < 2 || x > 9);
	printf("\nx = %d\n", x);

	// for ���� ������ Ƚ����ŭ �ݺ��Ѵ�
	for (int y = 0; y <= 9; y++) {
		re = x * y;
		printf("\n%d x %d = %d\n", x, y, re);
	}
	
}