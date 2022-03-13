#include<stdio.h>

int main()
{
	// 1. 사용자에게 5 개의 점수를 입력받아서, 합계와 평균을 출력하는 코드를
	//	배열을 이용하여 작성하세요

	int point[5], sum;
	double avg;

	sum = 0;

	for (int i = 0; i < 5; i++) {
		printf("점수를 입력해주세요 : ");
		scanf("%d", &point[i]);
		sum += point[i];
	}
	avg = sum / 5.0;

	printf("점수의 합계는 : %d\n", sum);
	printf("점수의 평균은 : %.2lf\n", avg);


}