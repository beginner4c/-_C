#include<stdio.h>

int main()
{
	// 1. ����ڿ��� 5 ���� ������ �Է¹޾Ƽ�, �հ�� ����� ����ϴ� �ڵ带
	//	�迭�� �̿��Ͽ� �ۼ��ϼ���

	int point[5], sum;
	double avg;

	sum = 0;

	for (int i = 0; i < 5; i++) {
		printf("������ �Է����ּ��� : ");
		scanf("%d", &point[i]);
		sum += point[i];
	}
	avg = sum / 5.0;

	printf("������ �հ�� : %d\n", sum);
	printf("������ ����� : %.2lf\n", avg);


}