#include<stdio.h>

void main() {
	int a = 1, b = 1;

	int aminus, bminus;

	aminus = a--;
	// aminus�� ���� �ԷµǸ鼭 a�� ���� �ٲ��
	bminus = --b;
	// bminus�� ���� �ٲ�� ���� �ƴ϶� b�� ���� �ٲ��

	printf("a a-- b --b \n");
	printf("%d %d %3d %3d\n", a, aminus, b, bminus);
}