#include <stdio.h>
// if ~ else �� ���� �ذ�
int main()
{
	// 1. ���̸� �Է� �޾Ƽ�, ����/�̼����ڸ� ����ϴ� �ڵ�

	int age;

	printf("���̸� �Է��ϼ��� : ");
	scanf("%d", &age);

	if (age > 19) {
		printf("����� �����Դϴ�\n");
	}
	else {
		printf("�ʴ� ���ڴ�\n");
	}
	// 2. ������ �Է� �޾Ƽ�, �Է� ���� ������ 3 �� ������� �ƴ��� �Ǻ��ϴ� �ڵ�
	
	int A;

	printf("���� �ϳ� �־���� : ");
	scanf("%d", &A);

	if (A % 3 == 0) {
		printf("�� ���� 3�� ���\n");
	}
	else {
		printf("3�� ����� �ƴϳ�\n");
	}

	// 3. ������ Ÿ�� �̵� ��, �̵��� �������� ���� 10 �����̸� ������ 2 ��
	//	�������� ���� 10 �ʰ���� ������ 3������ ����Ͽ�
	//	������ �Է¹޾�, �ɸ� �ð��� ����ϼ���
	
	int busstop, time;

	printf("������ �� �Է� : ");
	scanf("%d", &busstop);

	if (busstop <= 10) {
		time = busstop * 2;
		printf("�ɸ� �ð��� %d ���̴�\n", time);
	}
	else {
		time = busstop * 3;
		if (time > 60) {
			printf("�ɸ� �ð��� %d �ð� %d ���Դϴ�\n", time / 60, time % 60);
		}
		else {
			printf("�ɸ� �ð��� %d �� �Դϴ�\n", time);
		}
	}
}