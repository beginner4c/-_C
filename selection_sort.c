#include<stdio.h>

// max postion 위치값을 돌려주는 함수
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

// 받은 배열의 위치 두 개를 바꾸어주는 함수
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
		swap(&arr[maxPos], &arr[num - 1 - i]); // 보낼 때 배열의 주소를 보낸다
		// 그냥 arr[maxPos]을 보내면 call by value이므로 값 변경이 안되거나 error 발생
	}
}

// 배열 내부를 출력하는 함수
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