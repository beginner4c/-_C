#include <stdio.h>

int main()
{
	// 1. �������(6�ڸ�)�� �Է¹޾Ƽ�, ����/�̼����� ���θ� �Ǵ��ϴ� �ڵ带
	//		switch ~ case �� Ȱ���Ͽ� �����ϼ���
	
	int birth, result;

	printf("������� ���� �ڸ��� �Է����ּ��� : ");
	scanf("%d", &birth);

	birth = birth / 10000;

	if (birth > 19 || birth == 0)		result = 0;
	else result = 1;

	switch (result) {
	case 1: printf("�̼����� �Դϴ�\n"); break;
	case 0: printf("���� �Դϴ�\n"); break;
	}

	// 2. ����, ����, ���� �� ������ ������ �Է¹ް�, ��տ� ����
	//		90 �̻�: A, 80 �̻� : B, 70 �̻� : C, 60 �̻� : D, �������� F�� ����ϼ���



}