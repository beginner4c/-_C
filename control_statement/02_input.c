#include<stdio.h>

int main()
{
	double Current_Height;

	printf("����� Ű��?");
	scanf("%lf", &Current_Height);

	double Man_StandrdWeight = (Current_Height - 100) * 0.9;
	double Woman_StandrdWeight = (Current_Height - 105) * 0.9;

	printf("����� ǥ�� ü�� %.2lf(kg) �Դϴ�", Man_StandrdWeight);
}