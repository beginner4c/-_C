#include<stdio.h>
// 선택 정렬 문제
int main()
{
	char man[5] = { 'A','B','C','D','E' };
	double height[5];

	for (int i = 0; i < 5; i++) {
		printf("%c의 키를 입력하세요 : ", man[i]);
		scanf("%lf", &height[i]);
	}
	printf("\n\n");

	for (int i = 0; i < 5; i++) {
		printf("%c 의 키 : %.2lfcm\n", man[i], height[i]);
	}
	printf("\n\n");

	// 키가 작은 사람이 앞으로 오도록 정렬하세요
	// 이름이 뒤바뀌면 안됩니다

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (height[i] < height[j]) {
				double tmp1 = height[i];
				int tmp2 = man[i];
				height[i] = height[j];
				man[i] = man[j];
				height[j] = tmp1;
				man[j] = tmp2;
			}
		}
	}

	// 정렬 이후의 출력 식
	for (int i = 0; i < 5; i++) {
		printf("%c 의 키 : %.2lfcm\n", man[i], height[i]);
	}
	printf("\n\n");
}