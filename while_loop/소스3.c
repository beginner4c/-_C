#include <stdio.h>

int main()
{
	// 무한 반복

	int i = 0;
	while (1) {		// 반복을 수행할 조건이 항상 참인 상태
		printf("%d : ITBANK\n", i);
		i++;
		if (i == 10)		// 탈출할 조건을 지정해서 조건을 만족하면 반복문을 탈출
			break;
	}
	printf("=============================================\n\n");

	int price = 700, sum;
	i = 0;
	sum = 0;
	while (1) {
		sum += price;
		i++;
		if (sum > 10000)
			break;
	}
	i -= 1;
	sum -= price;

	printf("700원 짜리 아이스크림을 10000 원으로 몇 개를 살 수 있나 ? : %d\n", i);
	printf("금액 : %d\n", sum);

}