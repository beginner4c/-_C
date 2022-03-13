// 구조체의 크기

#include<stdio.h>
#include<stdlib.h>

typedef struct test {
	char ch;
	int num;
	char word[14];
	double db;
}Test;

int main()
{
	int size;

	printf("구조체 Test의 크기는 몇 byte 인가 : ");
	scanf("%d", &size);

	printf("%s\n", size == sizeof(Test) ? "정답" : "오답");
	// 결과 값이 27 byte가 아닌 32 byte 로 나오는데
	// 이는 구조체 Test가 가진자료형 중 가장 큰 자료형인
	// double(8 byte)을 기준으로 구조체의 크기를 할당하기 때문이다
	// 8 / 16 / 24 / 32 ~~ 이렇게 할당된다는 의미 이다
	// 이렇게 채워넣어진 5 byte를 padding byte 라고 한다
}