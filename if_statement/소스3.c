#include <stdio.h>

int main()
{
	// 0 에서 100 사이의 점수를 입력 받아서
	// 90 이상은 A		80 이상은 B
	// 70 이상은 C		60 이상은 D
	// 60 미만이면 F 를 출력하는 코드를 작성하세요
	// 등급은 문자로 처리하세요

	int score;
	char grade;

	printf("점수를 입력하세요 : ");
	scanf("%d", &score);

	if (90 <= score) {
		grade = 'A';
	}
	else if (80 <= score) {
		grade = 'B';
	}
	else if (70 <= score) {
		grade = 'C';
	}
	else if (60 <= score) {
		grade = 'D';
	}
	else
		grade = 'F';

	printf("이 사람의 등급은 %c 입니다", grade);
}