#include<stdio.h>

int main()
{
	// �ݺ��� (Loop) : Ư�� ���ǿ� ���� ������ �ݺ��Ͽ� �����ϴ� ����

	int num = 10;

	if (num < 20) {
		num++;
		printf("if : %d\n", num);
	}

	while (num < 20) {
		num++;
		printf("while : %d\n", num);
	}

	num = 0;		// num �� ���� 0

	while (num <= 10) { // num �� ���� 10 ������ ���
		printf("num : %d\n", ++num);
	}
	
	int i = 0;	// iterable, index : �ݺ� Ƚ���� üũ�ϴ� ������ �̸����� Ȱ��
	while (i < 5) {
		printf("Hello, World !!\n");
		i++;
	}
}