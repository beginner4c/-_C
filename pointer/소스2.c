#include<stdio.h>

//	 Swap(&n1, &n2);
void Swap(int *p1, int *p2) {
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

int main()
{
	int num;
	int *pnum;

	// 1. num �����̸��� �̿��Ͽ� num�� 10�� �����ϰ� ����ϼ���

	num = 10;

	printf("num �� �� : %d\n\n", num);

	// 2. num ������ �ּҸ� pnum ������ �����ϼ���

	pnum = &num;

	printf("*pnum �� �� : %d\n\n", *pnum);

	// 3. pnum ������ �̿��Ͽ� num�� 20�� �����ϰ� ����ϼ���

	*pnum = 20;

	printf("*pnum�� �� : %d\n\n", *pnum);

	// 4. pnum �� �̿��Ͽ� scanf() �Լ��� num �� ���� �Է¹ް� ����ϼ���

	printf("������ �Է��غ��� : ");
	scanf("%d", pnum);				// &*pnum ���� �ص� ������ &*�� ��� + �� - �� ȿ���� �׳� pnum�� �ٸ��� �ʴ�
	printf("pnum�� �� : %d, num�� �� : %d\n\n", *pnum, num);

	// 5. n1 �� n2 �� ���� ��ȯ�ϼ��� (������ ���� ������, �����ͷ� ��ȯ)

	int n1 = 11, n2 = 22, tmp;
	int *p1 = &n1, *p2 = &n2;
	printf("n1 : %d, n2 : %d\n", n1, n2);		// 11, 22
	// ���⼭ ���� p1 �� p2, tmp�� ����Ͽ� ���� ��ȯ�ϼ���

	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;

	printf("n1 : %d, n2 : %d\n", n1, n2);		// 22, 11

	Swap(&n1, &n2);		// �� ���� ���� ��ȯ�ϴ� �Լ� Swap()
	printf("n1 : %d, n2 : %d\n", n1, n2);		// 11, 22

	int n3 = 33, n4 = 44;
	printf("n3 : %d, n4 : %d\n", n3, n4);
	Swap(&n3, &n4);
	printf("n3 : %d, n4 : %d\n", n3, n4);
}