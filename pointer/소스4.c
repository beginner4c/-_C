#include<stdio.h>

void Quiz01(int *p1, int *p2)
{
	printf("n1 �� ���� %d, n2 �� ���� %d\n\n", *p1, *p2);
}

void Quiz02(int *p1, int *p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;

	printf("n1 �� ���� %d, n2 �� ���� %d\n\n", *p1, *p2);
}

void Quize03(int *p1, int *p2)
{
	printf("&n1 : %p, &n2 : %p\n", p1, p2);
}

int main()
{
	int n1 = 10, n2 = 20;

	Quiz01(&n1, &n2);
	// Quiz01 �Լ��� �����ϸ� n1 �� ���� n2 �� ���� ����ϵ��� �ۼ��ϼ���

	Quiz02(&n1, &n2);
	// Quiz02 �Լ��� �����ϸ� n1 �� n2 �� ���� ���� ��ȯ�ǵ��� �ۼ��ϼ���

	printf("&n1 : %p, &n2 : %p\n", &n1, &n2);	// %p �� ������ ������ �������� ����϶�� ��
	Quize03(&n1, &n2);
	// Quiz03 �Լ��� �����ϸ� n1 �� �ּҿ� n2 �� �ּҸ� ����ϵ��� �ۼ��ϼ���
	// ��� ������ main �Լ��� �ǵ��� ���� void �� ���� ���� �Լ��� ���弼��
}