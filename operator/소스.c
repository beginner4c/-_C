#include <stdio.h>		// operator (������)

int main()
{
	int num1;
	num1 = 10;		// ����

	int num2;
	num2 = 20;		// ����

	int answer;
	answer = num1 + num2;	// ����

	// ��� ������ : +, -, *, /, %
	// ����, ����, ����, ������, ������

	// 1. �������� ���� �ڷ����� ���� ����� �ٸ���

	num1 = 10;
	num2 = 3;

	double div1 = num1 / num2;			// [���� / ����]
	double div2 = num1 / (double)num2;	// [���� / �Ǽ�]

	printf("div1 : %.2lf\n", div1);
	printf("div2 : %.2lf\n", div2);

	int n1 = 10;
	int n2 = 13;

	printf("n1�� 2�� ���� ������ : %d\n", n1 % 2);
	printf("n2�� 2�� ���� ������ : %d\n", n2 % 2);
	printf("\n");

	int n3 = 190422;
	int date = n3 % 100;
	n3 = n3 / 100;
	int month = n3 % 100;
	int year = n3 / 100;

	printf("%d �� %d �� %d ���Դϴ�\n", year, month, date);

	// ũ�� �� ������
	n1 = 10, n2 = 3;
	printf("n1 > n2 : %d\n", n1 > n2);		// n1 �� n2 ���� ũ�� (�ʰ�)
	printf("n1 < n2 : %d\n", n1 < n2);		// n1 �� n2 ���� �۴� (�̸�)
	printf("n1 >= n2 : %d\n", n1 >= n2);	// n1 �� n2 ���� ũ�ų� ���� (�̻�)
	printf("n1 <= n2 : %d\n", n1 <= n2);	// n1 �� n2 ���� �۰ų� ���� (����)
	printf("n1 == n2 : %d\n", n1 == n2);	// n1 �� n2 �� ���� (��ġ)
	printf("n1 != n2 : %d\n", n1 != n2);	// n1 �� n2 �� ���� �ʴ� (����ġ)

	// ũ�� �� �����ڴ� ����� 1 Ȥ�� 0 ���� ��Ÿ����
	// 1�� ��(True)�� �ǹ��ϰ�, 0�� ����(False)�� �ǹ��Ѵ�
	// ũ�� �� �������� '==' �� ���� ������ '=' �� ȥ������ �ʵ��� ����

	// �� ������
	// �� ��� ���� ������ �����Ͽ� �� ����� �ٽ� �� ������ ��Ÿ����(1, 0)

	int age = 24;
	int gender = 3;

	printf("���̰� 19 �� �̻��ΰ� : %d\n", age >= 19);
	printf("������ �����ΰ� : %d\n", gender % 2 == 1);

	int result_age = age >= 19;
	int result_gender = gender % 2 == 1;

	printf("���̰� 19 �� �̻��̸鼭 ���ÿ� �����ΰ� : %\d\n", result_age && result_gender);

	// ��� ǥ

	int true = 1;
	int false = 0;
	// �� ������ ���ÿ� �����ؾ߸� ����� ���̰�, �� �ܿ� ��� ����
	
	// and ����(&&) : �� ������ ���ÿ� �����ؾ߸� ����� ���̰�, �� �ܿ��� ��� ����
	printf("true && true : %d\n", true && true);
	printf("true && false : %d\n", true && false);
	printf("false && true : %d\n", false && true);
	printf("false && false : %d\n", false && false);
	printf("\n");

	// or ���� (||) : �� ���� �� �ϳ��� ���� ������ ����� ���̰�, �� �� �����̸� ����
	printf("true || true : %d\n", true || true);
	printf("true || false : %d\n", true || false);
	printf("false || true : %d\n", false || true);
	printf("false || false : %d\n", false || false);
	printf("\n");

	// ���� ���� ������ : +=, -=, *=, /=, %=
	// ��Ģ ����� ������ ���ÿ� �����Ѵ�
	/*
		A += B		A = A + B	(A�� B�� ���� ���� �ٽ� A�� �����Ѵ�)
		A -+ B		A = A - B	(A�� B�� �� ���� �ٽ� A�� �����Ѵ�)
		A *= B		A = A * B	(A�� B�� ���� ���� �ٽ� A�� �����Ѵ�)
		A /= B		A = A / B	(A�� B�� ���� ���� �ٽ� A�� �����Ѵ�)
		A %= B		A = A % B	(A�� B�� ���� �������� �ٽ� A�� �����Ѵ�)
	*/

	int cost = 0;
	int member1 = 10000;
	int member2 = 20000;
	int member3 = 15000;
	cost += member1;		// cost = cost + member1;
	cost += member2;		// cost = cost + member2;
	cost += member3;		// cost = cost + member3;

	printf("cost : %d��\n", cost);

	// ���� ������ (++, --)
	int view = 0;
	
	printf("��ȸ�� : %d\n", view);
	view++;	// view = view + 1		// view += 1	// ���� ������ 1 �������Ѷ�
	printf("��ȸ�� : %d\n", view);
	view++;
	printf("��ȸ�� : %d\n", view);
	view++;

	/*
		����		�ǹ�
		num++		num �� ���� ���� Ȯ���ϰ� ���Ŀ� 1�� ������Ų�� (�� ����)
		++num		num �� ���� ���� ������Ű��, ���Ŀ� Ȯ���Ѵ� (�� ����)
		num--		num �� ���� ���� Ȯ���ϰ� ���Ŀ� 1�� ���ҽ�Ų�� (�� ����)
		--num		num �� ���� ���� ���ҽ�Ű��, ���Ŀ� Ȯ���Ѵ� (�� ����)
	*/

	int num = 10;
	printf("num++ : %d\n", num++);		// ���߿� Ȯ���ϱ� ������ ���� 11 �� ���� ���� 10 ���� ��µȴ�
	printf("++num : %d\n", ++num);		// ���� Ȯ���ϱ� ������ ���� 12 �� ���� ���� 12 �� ��µȴ�

	// +, - ��ȣ
	printf("num : %d\n", num);
	printf("-num : %d\n", -num);		// �տ� -�� ���� �� �����ε� ������� ������ ������ �����ϴ�

	num = -3;

	printf("num : %d\n", num);
	printf("-num : %d\n", -num);		// ������ -3�� ���� �����Ǿ +3���� �����ȴ�
}