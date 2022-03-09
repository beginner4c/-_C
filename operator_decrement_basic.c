#include<stdio.h>

void main() {
	int a = 1, b = 1;

	int aminus, bminus;

	aminus = a--;
	// aminus의 값이 입력되면서 a의 값도 바뀐다
	bminus = --b;
	// bminus의 값만 바뀌는 것이 아니라 b의 값도 바뀐다

	printf("a a-- b --b \n");
	printf("%d %d %3d %3d\n", a, aminus, b, bminus);
}