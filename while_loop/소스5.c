#include <stdio.h>

int main()
{
	// 사용자에게 10 이하의 정수를 입력받아서
	// 1 부터 100 까지의 입력받은 수의 배수만 출력하는 코드를 작성

	int num, gob, result;

	while (1) {
		printf("정수를 입력하세요 (1 ~ 10) : ");
		scanf("%d", &num);

		if (1 <= num && num <= 10) {		//조건에 맞는 범위이면 범위를 중단
			break;
		}
		printf("범위를 벗어났습니다, 다시 입력하세요\n");
	}

	result = 1;

	while (result <= 100) {
		result++;
		if (result % num == 0) {
			printf(" %d ", result);
		}
	}
}