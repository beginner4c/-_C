#include<stdio.h>
// ������ ������������ �����ϱ� (�������� �˰���)
int main()
{
	int arr[5] = { 2,8,6,4,7 };

	printf("arr : ");
	for (int i = 0; i < 5; i++) {		// 5 �� �ݺ�
		printf("%d", arr[i]);			// ���� ����ϰ�
		if (i == 4) printf("\n\n");		// ���������̸� �ٹٲ��� ����ϰ�
		else printf(", ");				// �ƴϸ� ',' �� �����Ѵ�
	}

	for (int i = 0; i < 5; i++) {	// �迭 ��� �� [����]
		for (int j = i; j < 5; j++) {	//�迭 ��� �� [���]
			if (arr[i] > arr[j]) {	// ������ �� ũ��,
				printf("%d�� %d �� ��ȯ !!\n", arr[i], arr[j]);
				int tmp = arr[i];	// arr[i]�� arr[j]�� ��ȯ
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	printf("arr : ");
	for (int i = 0; i < 5; i++) {		// 5 �� �ݺ�
		printf("%d", arr[i]);			// ���� ����ϰ�
		if (i == 4) printf("\n\n");		// ���������̸� �ٹٲ��� ����ϰ�
		else printf(", ");				// �ƴϸ� ',' �� �����Ѵ�
	}
}