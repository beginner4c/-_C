#include<stdio.h>
#include<stdlib.h>

int main() {
	int *p1 = malloc(4);		// 4 바이트 크기의 변수를 할당하고 그 주소를 p1에 저장
	int *p2 = malloc(sizeof(int));		// p1 과 동일하다
	int *p3 = (int *)malloc(sizeof(int));	// p1, p2 와 동일하지만 int 형 포인터로 전환

	// sizeof(자료형, 변수, 상수) : 인자의 byte 크기를 알려주는 연산자

	// malloc 는 void * malloc(int t_size) 로 정의되어 있다
	// 형태가 지정되지 않은 주소값을 반환하고,
	// 매개변수에는 정수형의 메모리 바이트 크기를 전달받는다

	// 단순하게 말하면 동적 할당은 변수 선언이다
	// 단, stack 영역이 아닌 heap 영역에 만드는 것이고, 변수 이름 대신 주소를 사용한다는 점이 다르다

	// 예제 1. 정수형 변수를 동적할당하고, 10을 대입해서 출력하기

	int *n1 = (int *)malloc(sizeof(int));
	*n1 = 10;
	printf("*n1 = %d\n", *n1);

	// 예제 2. double 형 변수를 동적 할당하고, scanf() 로 입력받은 값을 출력하기

	double *d1 = (double *)malloc(sizeof(double));
	printf("실수 입력 : ");
	scanf("%lf", d1);
	printf("입력한 실수는 %.2lf\n", *d1);

	// 문제 1. char 형 변수를 20 개 생성하여 그 시작점을 pname 에 저장하고,
	// 생성한 공간에 scanf()로 입력받아서 출력하세요

	char *pname = (char *)malloc(sizeof(char)*20);	// 배열과 유사한 형태
	printf("이름을 입력하세요 : ");
	scanf("%s", pname);			// scanf(Format, Address);
	printf("이름은 %s 입니다\n", pname);

	// char name[20];		// 배열의 이름은 주소, 포인터의 값은 주소
	// scanf("%s", name);
	//printf("이름은 %s입니다\n", name);

	// 문제 2. 3 개의 정수형 변수를 동적 할당하고, scanf() 입력받고
	// 그 합을 구하여 출력하세요 (배열, 일반변수)

	int *c1 = (int *)malloc(sizeof(int)*3);
	int total = 0;

	for (int i = 0; i < 3; i++) {
		printf("%d 정수를 입력하세요 : ", i + 1);
		scanf("%d", &c1[i]);
		total += c1[i];
	}
	printf("세 정수의 합은 : %d\n", total);
}