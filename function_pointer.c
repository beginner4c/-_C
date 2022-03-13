#include <stdio.h>

// 사칙연산을 통한 Function Pointer 기능의 기초적 사용

// 아래 Function처럼 return value와 formal parameter가 비슷한 function들을 
// function pointer를 통해서 묶어내면 프로그램이 좀 더 유연해진다
int add(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

int mul(int a, int b) {
	return a * b;
}

int div(int a, int b) {
	return a / b;
}

void main() {
	int which;
	int num1, num2, res;
	int (*f[4])(int, int); // function pointer array
	// 이런 식으로 사용하면 if문 사용 없이도 프로그램을 짤 수 있다
	f[0] = add;
	f[1] = sub;
	f[2] = mul;
	f[3] = div;

	printf("사칙연산 계산기 (1: 덧셈, 2: 뺄셈, 3: 곱셈, 4: 나눗셈\n");
	for (int i = 0;i < 5;i++) {
		printf("연산 종류 선택 (1,2,3,4)");
		scanf("%d", &which);

		printf("첫 번째 연산 값 : ");
		scanf("%d", &num1);
		printf("두 번째 연산 값 : ");
		scanf("%d", &num2);

		res = (*f[which - 1])(num1, num2); // function pointer array 사용

		printf("연산 결과는 %d\n", res);
	}
}