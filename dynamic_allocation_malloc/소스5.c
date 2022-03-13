#include<stdio.h>
#include<stdlib.h>

int * getNode() {			// int 형 주소를 반환하는 함수 getNode()
	int * p = (int *)malloc(sizeof(int));	// int 변수를 동적할당 받아서
	printf("정수 입력 : ");
	scanf("%d", p);		// p 에 값을 입력받고
	return p;			// p(주소값) 을 반환한다
}

int main()
{
	int sum = 0;

	int *p1 = getNode();	// 반환된 주소값이 p1 에 대입된다
	int *p2 = getNode();	// 함수가 종료되어도 동적할당은 사라지지 않는다

	*p1 += 1;
	*p2 += 2;

	sum = *p1 + *p2;
	printf("sum : %d\n", sum);
}