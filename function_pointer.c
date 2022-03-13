#include <stdio.h>

// ��Ģ������ ���� Function Pointer ����� ������ ���

// �Ʒ� Functionó�� return value�� formal parameter�� ����� function���� 
// function pointer�� ���ؼ� ����� ���α׷��� �� �� ����������
int add(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

int mul(int a, int b) {
	return a * b;
}

int div(int a, int b) {
	return a / b;
}

void main() {
	int which;
	int num1, num2, res;
	int (*f[4])(int, int); // function pointer array
	// �̷� ������ ����ϸ� if�� ��� ���̵� ���α׷��� © �� �ִ�
	f[0] = add;
	f[1] = sub;
	f[2] = mul;
	f[3] = div;

	printf("��Ģ���� ���� (1: ����, 2: ����, 3: ����, 4: ������\n");
	for (int i = 0;i < 5;i++) {
		printf("���� ���� ���� (1,2,3,4)");
		scanf("%d", &which);

		printf("ù ��° ���� �� : ");
		scanf("%d", &num1);
		printf("�� ��° ���� �� : ");
		scanf("%d", &num2);

		res = (*f[which - 1])(num1, num2); // function pointer array ���

		printf("���� ����� %d\n", res);
	}
}