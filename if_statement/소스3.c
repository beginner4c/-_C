#include <stdio.h>

int main()
{
	// 0 ���� 100 ������ ������ �Է� �޾Ƽ�
	// 90 �̻��� A		80 �̻��� B
	// 70 �̻��� C		60 �̻��� D
	// 60 �̸��̸� F �� ����ϴ� �ڵ带 �ۼ��ϼ���
	// ����� ���ڷ� ó���ϼ���

	int score;
	char grade;

	printf("������ �Է��ϼ��� : ");
	scanf("%d", &score);

	if (90 <= score) {
		grade = 'A';
	}
	else if (80 <= score) {
		grade = 'B';
	}
	else if (70 <= score) {
		grade = 'C';
	}
	else if (60 <= score) {
		grade = 'D';
	}
	else
		grade = 'F';

	printf("�� ����� ����� %c �Դϴ�", grade);
}