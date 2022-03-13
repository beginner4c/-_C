#include <stdio.h>
// while 문을 활용해서 해결하세요
int main()
{
	printf("1.\n\n");
	// 1. ITBANK 문자열을 5 줄 출력하세요
	int st = 0;

	while (st < 5) {
		printf("ITBANK\n");
		st++;
	}

	printf("\n2.\n\n");
	// 2. 1 부터 5 까지의 숫자를 한 줄에 출력하세요
	int num = 1;

	while (num <= 5) {
		printf(" %d ", num);
		num++;
	}

	printf("\n\n3.\n\n");
	// 3. 1 부터 10 까지의 정수의 합을 출력하세요
	int num1 = 1, sum = 0;

	while (num1 <= 10) {
		sum = num1 + sum;
		num1++;
	}
	printf("정수의 합 : %d", sum);

	printf("\n\n4.\n\n");
	// 4. 1 부터 100 까지의 정수 중 홀수의 합을 출력하세요
	int pass, num2;

	num2 = 1;
	pass = 0;

	while (num2 <= 100) {
		if (num2 % 2)
			pass += num2;
		num2++;
	}

	printf("1부터 100의 홀수의 합 : %d", pass);

	printf("\n\n5.\n\n");
	// 5. 알파벳 'A' 부터 'Z' 까지의 문자를 띄워쓰기로 구분하여 한 줄에 출력하세요

	int ch = 'A';

	while (ch <= 'Z') {
		printf("%c", ch);
		ch++;
	}
	printf("\n\n");
}