// ����ü ������
#include<stdio.h>
#include<stdlib.h>
typedef struct computer {
	char cpu[20];
	double clock;
	int ram;
	int ssd;
	int hdd;
	char vga[20];
}PC;			// computer ��� ����ü�� �̸��� PC �� �θ���
void PrintPC(PC pc) {	// ���� �ڷ����̹Ƿ�, ���ĸ� ���� �Լ��� Ȱ���ϸ� �� ���ϴ�
	printf("pc�� ����\n");
	printf("CPU : %s, %.1lf GHz\n", pc.cpu, pc.clock);
	printf("RAM : %d GB, SSD : %d GB, HDD : %d GB\n", pc.ram, pc.ssd, pc.hdd);
	printf("Graphic : %s\n\n", pc.vga);
}
int main() {
	// �� ����ü�� �̿��Ͽ�, �� ���� ���� �ٸ� ������ ������ ��ǻ�͸� �����ϼ���
	// �� ��ǻ���� ������ �˾ƺ��� ���� ����ϼ���

	PC pc1 = {
		"Intel Core i7-7700",
		3.6, 16, 250, 1000,
		"Intel HD Graphics"
	};
	PC pc2 = {
		"Intel Celeron",
		2.5, 4, 0, 500,
		"GeForce 8300 GS"
	};
	printf("pc1�� ����\n");
	printf("CPU : %s, %.1lf GHz\n", pc1.cpu, pc1.clock);
	printf("RAM : %d GB, SSD : %d GB, HDD : %d GB\n", pc1.ram, pc1.ssd, pc1.hdd);
	printf("Graphic : %s\n\n", pc1.vga);

	/*printf("pc2�� ����\n");
	printf("CPU : %s, %.1lf GHz\n", pc2.cpu, pc2.clock);
	printf("RAM : %d GB, SSD : %d GB, HDD : %d GB\n", pc2.ram, pc2.ssd, pc2.hdd);
	printf("Graphic : %s\n\n", pc2.vga);*/
	PrintPC(pc2);

}