#include <stdio.h>

int main()
{
	// switch ~ case �� while �� �̿��� �޴� �����ϱ�

	// while : ���ǿ� ���� ���๮�� �ݺ��ϴ� ��� (�ݺ���)

	int menu;
	int n1, n2;

	while (1) {
		printf("�Է��ϴ� �޴��� ���� �ٸ� ����� ����մϴ�\n");
		printf("1. ���� \n2. ����\n3. ����\n���� > ");
		scanf("%d", &menu);
		printf("\n");
		switch (menu) {
		case 1:
			printf("�� ���� �������� �Է� : ");
			scanf("%d %d", &n1, &n2);
			printf("%d + %d = %d\n", n1, n2, n1 + n2);
			break;
		case 2:
			printf("�� ���� �������� �Է� : ");
			scanf("%d %d", &n1, &n2);
			printf("%d - %d = %d �Դϴ�\n", n1, n2, n1 - n2);
			break;
		case 3:
			return;
		default:
			printf("�޴��� �߸� �����Ͽ����ϴ�\n");
		}

	}
}