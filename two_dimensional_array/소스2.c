// 2 ���� ���� ���� ���� ���� �� ���� �����ϱ�
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
// �����Լ� ���� ������ �����ϴ� ���� : ���� ����
// ���������� � �Լ������� ������ �� �մ� �����̴�
// ���������� �޸�, Ư�� �Լ������� ���� ������ ������ [��������]��� �Ѵ�

int map[10][10] = { 0 };
int x = 0, y = 0;

void PrintMap() {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (x == i && y == j) printf("��");			// ���� Ư����ȣ
			printf("%s", (map[i][j]) ? "��" : "  ");	// ���� �����ڿ� ���� ������ �������� ������ != 0 �� ����
		} printf("\n");									// ���� Ư����ȣ
	} printf("\n");
}

int main() {
	for (int i = 0; i < 10; i++) 
			map[9][i] = 1;			// �� �Ʒ��ٸ� ���� 1 �� �ʱ�ȭ
		
	int input = 0;
	
	do {
		PrintMap();					// ����� ��ġ�� ���� ����ϰ�
		if (map[x + 1][y] == 0) {	// �Ʒ�ĭ�� ���� 0�̸� (���������)
			x++;					// ���� ��ǥ���� 1 ������Ű�� (��ĭ ������)
			Sleep(250);				// 0.35 ���� ���ð��� ������ (Windows.h �� �־�� �Ѵ�)
		}
		else {
			input = getch();
		/*
			getch() �Լ��� ���� Ű ���� ������� Ű �Է��� ������ �����ϴ� �Լ�
			27 : ESC
			����Ű : 72, 75, 77, 80
		*/
			switch(input){
			case 72:				//printf("%d\n", input); �� ����Ű
				for (int i = 0; i < 3; i++) {
					x -= (map[x - 1][y] ? 0 : 1);	// ��ǥ ����
					system("cls");					// ȭ�� �ʱ�ȭ
					PrintMap();						// �� ���
					Sleep(250);						// �����ð�
				}
				break;
			case 75:				//printf("%d\n", input); ���� ����Ű
				y -= (map[x][y - 1]) ? 0 : 1;
				break;
			case 77:				//printf("%d\n", input); ���� ����Ű
				y += (map[x][y + 1]) ? 0 : 1;
				
				break;
			case 80:				//printf("%d\n", input); �Ʒ� ����Ű
				break;
			}
		}
		system("cls");				// ȭ�� �����
	} while (input != 27);			// 27 : ESC Ű�� ASCII �ڵ�


}