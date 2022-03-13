#include<stdio.h>

int main()
{
	int arr[5];		//array, 배열 이름은 변수 이름 규칙과 같다

	// 1. 사용자에게 정수를 5 개 입력 받아서 배열에 저장하기

	for (int i = 0; i < 5; i++) {
		printf("%d 번 째 정수를 입력해주세요 : ", i + 1);
		scanf("%d", &arr[i]);
	}

	// 2. 배열의 멤버 변수를 순서대로 출력하기

	printf("arr : ");
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n\n");

	// 3. 배열의 멤버 중에서 가장 작은 값과 가장 큰 값을 찾아내기

	int min = 50000;
	int max = -50000;

	for (int i = 0; i < 5; i++) {	// 전체 중에서
		if (min > arr[i])			// 최소값보다 더 작은값이 나타나면
			min = arr[i];			// 그 값을 min에 저장
		if (max < arr[i])			// 최대값보다 더 큰 값이 나타나면
			max = arr[i];			// 그 값을 max 에 저장
	}
	printf("최소값 : %d, 최대값 : %d\n\n", min, max);
}