#include<stdio.h>
// ���� ���� ����
int main()
{
	char man[5] = { 'A','B','C','D','E' };
	double height[5];

	for (int i = 0; i < 5; i++) {
		printf("%c�� Ű�� �Է��ϼ��� : ", man[i]);
		scanf("%lf", &height[i]);
	}
	printf("\n\n");

	for (int i = 0; i < 5; i++) {
		printf("%c �� Ű : %.2lfcm\n", man[i], height[i]);
	}
	printf("\n\n");

	// Ű�� ���� ����� ������ ������ �����ϼ���
	// �̸��� �ڹٲ�� �ȵ˴ϴ�

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (height[i] < height[j]) {
				double tmp1 = height[i];
				int tmp2 = man[i];
				height[i] = height[j];
				man[i] = man[j];
				height[j] = tmp1;
				man[j] = tmp2;
			}
		}
	}

	// ���� ������ ��� ��
	for (int i = 0; i < 5; i++) {
		printf("%c �� Ű : %.2lfcm\n", man[i], height[i]);
	}
	printf("\n\n");
}