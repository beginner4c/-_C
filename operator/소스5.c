#include<stdio.h>

int main()
{
	// 출생년도를 4 자리를 입력받아서
	// 나이를 계산하고
	// 나이에 따라서 성인/미성년자 여부를 출력하는 프로그램을 작성하세요

	int birth, age;

	printf("출생 년도 4 자리를 입력하세요(ex : 2000) : ");
	scanf("%d", &birth);

	age = 2019 - birth + 1;

	printf("이 사람의 나이는 %d\n즉, %s 입니다", age, (age > 19) ? "성인" : "미자");
}