#include<stdio.h>
// �� ������ �� ��ȯ
int main()
{
	int n1 = 10, n2 = 20;

	printf("n1 : %d, n2 : %d\n", n1, n2);

	// ���⿡ �ڵ带 �ۼ��ϼ���
	int desk1 = n1;
	int desk2 = n2;

	n1 = desk2;
	n2 = desk1;

	printf("n1 : %d, n2 : %d\n", n1, n2);
}