#include<stdio.h>

int main()
{
	int num = 0;

	if (num > 0) {			// 만약, num이 0보다 크면
		printf("%d는 0 보다 큰 수 입니다.\n", num);
	}
	else if (num == 0) {	// 아니면, 만약 num이 0과 같으면
		printf("입력한 수는 %d 입니다\n", num);
	}
	else {					// 아니면 (크지도 않고, 같지도 않은 경우)
		printf("%d는 0 보다 작은 수 입니다.\n", num);
	}
	
	// 단순 if 문을 이어서 나열하면, 첫 번째 if 와 두 번째 if 가 동시에 수행될 수도 있다

	printf("정수 입력 : ");
	scanf("%d", &num);

	if (num % 3 == 0)
		printf("%d는 3의 배수입니다\n", num);
	if (num % 5 == 0)
		printf("%d는 5의 배수입니다\n\n", num);

	printf("[if ~ else if] 로 처리하면\n\n");

	if (num % 3 == 0)
		printf("%d는 3의 배수입니다\n\n", num);
	else if (num % 5 == 0)
		printf("%d는 5의 배수입니다\n\n", num);

	printf("[if 안에 또 다른 if] 로 처리하면\n\n");

	if (num % 3 == 0) {
		printf("%d는 3의 배수입니다\n", num);
		if (num % 5 == 0)
			printf("%d는 5의 배수입니다\n\n", num);
	}
}