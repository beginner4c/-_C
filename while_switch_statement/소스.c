#include <stdio.h>

int main()
{
	// 1. 생년월일(6자리)을 입력받아서, 성인/미성년자 여부를 판단하는 코드를
	//		switch ~ case 를 활용하여 구현하세요
	
	int birth, result;

	printf("생년월일 여섯 자리를 입력해주세요 : ");
	scanf("%d", &birth);

	birth = birth / 10000;

	if (birth > 19 || birth == 0)		result = 0;
	else result = 1;

	switch (result) {
	case 1: printf("미성년자 입니다\n"); break;
	case 0: printf("성인 입니다\n"); break;
	}

	// 2. 국어, 영어, 수학 세 과목의 점수를 입력받고, 평균에 따라서
	//		90 이상: A, 80 이상 : B, 70 이상 : C, 60 이상 : D, 나머지는 F를 출력하세요



}