#include <stdio.h>

int main()
{
	// ���� �ݺ�

	int i = 0;
	while (1) {		// �ݺ��� ������ ������ �׻� ���� ����
		printf("%d : ITBANK\n", i);
		i++;
		if (i == 10)		// Ż���� ������ �����ؼ� ������ �����ϸ� �ݺ����� Ż��
			break;
	}
	printf("=============================================\n\n");

	int price = 700, sum;
	i = 0;
	sum = 0;
	while (1) {
		sum += price;
		i++;
		if (sum > 10000)
			break;
	}
	i -= 1;
	sum -= price;

	printf("700�� ¥�� ���̽�ũ���� 10000 ������ �� ���� �� �� �ֳ� ? : %d\n", i);
	printf("�ݾ� : %d\n", sum);

}