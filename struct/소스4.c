// ����ü�� Ȱ���� ��ȭ��ȣ�� �����

#include<stdio.h>
#include<stdlib.h>

typedef struct contact {
	char name[20];
	char pnum[14];	// ��ȭ ��ȣ(010-2222-1111)
} PB;

PB NewPB() {
	PB newpb;							// �� ����ó ������ �����

	printf("�� ����ó�� �̸� : ");
	scanf("%s", newpb.name);			// �̸� �Է¹ް�
	
	printf("�� ����ó�� ��ȭ��ȣ : ");
	scanf("%s", newpb.pnum);			// ��ȣ �Է¹ް�
	
	return newpb;						// ���� �غ�� �� ����ó�� ��ȯ�Ѵ�
}

void PrintPB(PB pb) {		// �� ���� ����ó�� ���� �޾Ƽ�
	printf("�̸� : %s, ��ȭ��ȣ : %s\n", pb.name, pb.pnum);	// �̸��� ��ȣ�� ���
}

int main() {
	
	int menu, num;

	PB list[100];			// ������ �迭���� memory allocate �� ��� �Ѵ� (ũ�Ⱑ ���������� ���ϱ� ����)

	for (int i = 0; i < 100; i++)
		list[i].name[0] = '\0';

	do {
		system("cls");
		printf("1. ����ó �߰�\n2. ����ó ��� ���\n3. ����ó ����\n");
		printf("0. ����=====================================\n���� : ");
		scanf("%d", &menu);
		switch (menu) {
		case 1:		// ����ó �߰�
			for (int i = 0; i < 100; i++) {			// ��ü �߿���
				if (list[i].name[0] == '\0') {		// �̸��� ������
					list[i] = NewPB();				// �� ����ó�� ���� ����
					break;							// �ݺ��� �ߴ�
				}
			}
			break;			// switch ~ case �� break
		case 2:		// ����ó ��� ���
			for (int i = 0; i < 100; i++) {
				if (list[i].name[0] != '\0') {
					PrintPB(list[i]);
				}
			}
			break;			// switch ~ case �� break
		case 3:		// ����ó ����
			printf("������ �������� ������ �Է� : ");
			scanf("%d", &num);	// 1, 2, 3 ...
			
			list[num - 1].name[0] = '\0';		// �̷��� �ϸ� ������ ������ ����ڰ� -1 ���� �������� ���ڸ� �Է��ϸ� 
												// ������ �߻��Ѵ�
			break;
		}
	system("pause");
	} while (menu);
}