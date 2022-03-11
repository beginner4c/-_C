#include <stdio.h>
// if ~ else 로 문제 해결
int main()
{
	// 1. 나이를 입력 받아서, 성인/미성년자를 출력하는 코드

	int age;

	printf("나이를 입력하세요 : ");
	scanf("%d", &age);

	if (age > 19) {
		printf("당신은 성인입니다\n");
	}
	else {
		printf("너는 미자다\n");
	}
	// 2. 정수를 입력 받아서, 입력 받은 정수가 3 의 배수인지 아닌지 판별하는 코드
	
	int A;

	printf("숫자 하나 넣어봐라 : ");
	scanf("%d", &A);

	if (A % 3 == 0) {
		printf("이 수는 3의 배수\n");
	}
	else {
		printf("3의 배수가 아니네\n");
	}

	// 3. 버스를 타고 이동 시, 이동한 정거장의 수가 10 이하이면 구간당 2 분
	//	정거장의 수가 10 초과라면 구간당 3분으로 계산하여
	//	구간을 입력받아, 걸린 시간을 출력하세요
	
	int busstop, time;

	printf("정거장 수 입력 : ");
	scanf("%d", &busstop);

	if (busstop <= 10) {
		time = busstop * 2;
		printf("걸린 시간이 %d 분이다\n", time);
	}
	else {
		time = busstop * 3;
		if (time > 60) {
			printf("걸린 시간은 %d 시간 %d 분입니다\n", time / 60, time % 60);
		}
		else {
			printf("걸린 시간은 %d 분 입니다\n", time);
		}
	}
}