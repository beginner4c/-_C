#include <stdio.h>

int main()
{
	int n1, n2, result = 0;
	char oper;

	// �� ���� ��ġ�� result += n1; �� �Է��ϸ� ������ �߻�???
		// ������ n1 �� ���� ���ǵǾ� ���� �ʱ� �����̴�

	printf("ù ��° ������ �Է��ϼ��� : ");
	scanf("%d", &n1);
	result += n1;

	printf("�� ��° ������ �Է��ϼ��� : ");
	scanf("%d", &n2);

	printf("���� Ȥ�� ���� ��ȣ�� �Է��ϼ��� : ");
	scanf("%c", &oper); scanf("%c", &oper);
	
	result += (oper == '+') ? n2 : -n2;

	printf("result : %d\n", result);

	printf("================================\n\n");

	int count = 0;
	char yn;
	
	printf("count : %d\n", count);

	printf("�����ұ�� (y/n) : ");
	scanf("%c", &yn); scanf("%c", &yn);

	count += (yn == 'y') ? 1 : 0;

	printf("count : %d\n", count);
}