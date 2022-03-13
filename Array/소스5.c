#include<stdio.h>
// 정수를 오름차순으로 정렬하기 (선택정렬 알고리즘)
int main()
{
	int arr[5] = { 2,8,6,4,7 };

	printf("arr : ");
	for (int i = 0; i < 5; i++) {		// 5 번 반복
		printf("%d", arr[i]);			// 값을 출력하고
		if (i == 4) printf("\n\n");		// 마지막값이면 줄바꿈을 출력하고
		else printf(", ");				// 아니면 ',' 로 구분한다
	}

	for (int i = 0; i < 5; i++) {	// 배열 멤버 중 [기준]
		for (int j = i; j < 5; j++) {	//배열 멤버 중 [대상]
			if (arr[i] > arr[j]) {	// 기준이 더 크면,
				printf("%d와 %d 를 교환 !!\n", arr[i], arr[j]);
				int tmp = arr[i];	// arr[i]와 arr[j]를 교환
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	printf("arr : ");
	for (int i = 0; i < 5; i++) {		// 5 번 반복
		printf("%d", arr[i]);			// 값을 출력하고
		if (i == 4) printf("\n\n");		// 마지막값이면 줄바꿈을 출력하고
		else printf(", ");				// 아니면 ',' 로 구분한다
	}
}