#include <stdio.h>

int main()
{
	int a = 7, b = 10, c = 1, d = 0;

	// 단항 증감 연산

	c = a++ + ++b;
	d = a-- - b++;

	printf("a : %d, b : %d, c : %d, d : %d\n", a, b, c, d);

	// 단항 증감 연산 + 크기 비교 + 논리 연산

	c = ++a >= b-- && --c != d++;
	d = a + b < 0 || a++ == 0;
	
	printf("a : %d, b: %d, c : %d, d: %d\n", a, b, c, d);


	// 논리 연산의 처리 순서

	c = a < b || a++ + ++b;
	printf("a %d, b :%d, c : %d, d : %d\n", a, b, c, d);

	c = a < b && a++ + ++b;
	printf("a %d, b :%d, c : %d, d : %d\n", a, b, c, d);

}