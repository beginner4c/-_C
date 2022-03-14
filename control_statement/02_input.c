#include<stdio.h>

int main()
{
	double Current_Height;

	printf("당신의 키는?");
	scanf("%lf", &Current_Height);

	double Man_StandrdWeight = (Current_Height - 100) * 0.9;
	double Woman_StandrdWeight = (Current_Height - 105) * 0.9;

	printf("당신의 표준 체중 %.2lf(kg) 입니다", Man_StandrdWeight);
}