#include<stdio.h>
#include<stdlib.h>		// malloc(), free() 등 함수를 가지고 있다

// 동적 할당의 해제

int main()
{
	int *p = (int *)malloc(sizeof(int));		// 동적 할당 요청
	*p = 10;
	printf("*p : %d\n", *p);
	free(p);									// 동적 할당 해제
	printf("*p : %d\n", *p);
}