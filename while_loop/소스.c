#include<stdio.h>

int main()
{
	// 반복문 (Loop) : 특정 조건에 따라서 구문을 반복하여 실행하는 구문

	int num = 10;

	if (num < 20) {
		num++;
		printf("if : %d\n", num);
	}

	while (num < 20) {
		num++;
		printf("while : %d\n", num);
	}

	num = 0;		// num 의 값은 0

	while (num <= 10) { // num 의 값이 10 이하일 경우
		printf("num : %d\n", ++num);
	}
	
	int i = 0;	// iterable, index : 반복 횟수를 체크하는 변수의 이름으로 활용
	while (i < 5) {
		printf("Hello, World !!\n");
		i++;
	}
}