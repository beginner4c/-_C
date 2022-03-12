#include<stdio.h>

// max postion ��ġ���� �����ִ� �Լ�
int getMaxPos(int arr[], int num) {
	int max, maxPos;

	max = -1;
	maxPos = -1;

	for (int i = 0; i < num; i++) {
		if (arr[i] > max) {
			max = arr[i];
			maxPos = i;
		}
	}

	return maxPos;
}

// ���� �迭�� ��ġ �� ���� �ٲپ��ִ� �Լ�
void swap(int arr[], int arr2[]) {
	int tmp;

	tmp = *arr;
	*arr = *arr2;
	*arr2 = tmp;
}

void selectionSort(int arr[], int num) {
	int maxPos;

	for (int i = 0; i < num; i++) {
		maxPos = getMaxPos(arr, num - i);
		swap(&arr[maxPos], &arr[num - 1 - i]); // ���� �� �迭�� �ּҸ� ������
		// �׳� arr[maxPos]�� ������ call by value�̹Ƿ� �� ������ �ȵǰų� error �߻�
	}
}

// �迭 ���θ� ����ϴ� �Լ�
void printArray(int arr[], int num) {
	for (int i = 0;i < num;i++)
		printf("%4d", arr[i]);

	printf("\n");
}

void main() {
	int x[10] = { 12,54,67,45,89,14,29,17,13,11 };

	printf("before sort\n");
	printArray(x, 10);
	printf("after sort\n");
	selectionSort(x, 10);
	printArray(x, 10);
}