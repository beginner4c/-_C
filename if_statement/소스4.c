/*
버스가 다니는 시간인지
현금이 있는지
카드가 있는지

버스가 다니는 시간이고, 현금 혹은 카드가 있으면 버스
버스가 다니는 시간이 아닐 때
	현금이 1200 원 이상이거나 카드가 있으면 택시
	현금이 1200 원 미만이고, 동시에 카드도 없으면 뚜벅이
*/
#include <stdio.h>

int main()
{
	int bus, cash;
	char card;

	printf("지금은 몇 시인가 : ");
	scanf("%d", &bus);
	printf("돈 얼마 있는데? : ");
	scanf("%d", &cash);
	printf("카드는 가지고 있고? (Y/N) : ");
	scanf("%c", &card); scanf("%c", &card);

	if (bus >= 6 && bus <= 23) {
		if (cash > 1200 || card == 'Y')
			printf("\n버스 타고 가라 그냥\n");
	}

	else if (bus < 6 || bus > 23) {
		if (cash >= 12000 || card == 'Y')
			printf("\n돈 많네? 택시 타고 가라\n");
		else
			printf("\n걸어라 돈 없는 뚜벅아\n");
	}
}