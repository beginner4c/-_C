#include<stdio.h>

int main()
{
	int num, year;
	printf("주민 등록 번호 뒷자리를 입력하세요 : ");
	scanf("%d", &num);

	num /= 1000000;

	switch (num) {
	case 9:
	case 0: year = 1800; break;
	case 1:
	case 2: year = 1900; break;
	case 3:
	case 4: year = 2000; break;
	}

	printf("%d 년대 출생자 입니다", year);
}