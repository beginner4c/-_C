#include<stdio.h>

int main()
{
	int arr[5];		//array, �迭 �̸��� ���� �̸� ��Ģ�� ����

	// 1. ����ڿ��� ������ 5 �� �Է� �޾Ƽ� �迭�� �����ϱ�

	for (int i = 0; i < 5; i++) {
		printf("%d �� ° ������ �Է����ּ��� : ", i + 1);
		scanf("%d", &arr[i]);
	}

	// 2. �迭�� ��� ������ ������� ����ϱ�

	printf("arr : ");
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n\n");

	// 3. �迭�� ��� �߿��� ���� ���� ���� ���� ū ���� ã�Ƴ���

	int min = 50000;
	int max = -50000;

	for (int i = 0; i < 5; i++) {	// ��ü �߿���
		if (min > arr[i])			// �ּҰ����� �� �������� ��Ÿ����
			min = arr[i];			// �� ���� min�� ����
		if (max < arr[i])			// �ִ밪���� �� ū ���� ��Ÿ����
			max = arr[i];			// �� ���� max �� ����
	}
	printf("�ּҰ� : %d, �ִ밪 : %d\n\n", min, max);
}