// 구조체 만들어보기
#include<stdio.h>
#include<stdlib.h>
typedef struct computer {
	char cpu[20];
	double clock;
	int ram;
	int ssd;
	int hdd;
	char vga[20];
}PC;			// computer 라는 구조체의 이름을 PC 로 부른다
void PrintPC(PC pc) {	// 같은 자료형이므로, 형식만 맞춘 함수를 활용하면 더 편리하다
	printf("pc의 정보\n");
	printf("CPU : %s, %.1lf GHz\n", pc.cpu, pc.clock);
	printf("RAM : %d GB, SSD : %d GB, HDD : %d GB\n", pc.ram, pc.ssd, pc.hdd);
	printf("Graphic : %s\n\n", pc.vga);
}
int main() {
	// 위 구조체를 이용하여, 두 대의 서로 다른 정보를 가지는 컴퓨터를 생성하세요
	// 각 컴퓨터의 정보를 알아보기 쉽게 출력하세요

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
	printf("pc1의 정보\n");
	printf("CPU : %s, %.1lf GHz\n", pc1.cpu, pc1.clock);
	printf("RAM : %d GB, SSD : %d GB, HDD : %d GB\n", pc1.ram, pc1.ssd, pc1.hdd);
	printf("Graphic : %s\n\n", pc1.vga);

	/*printf("pc2의 정보\n");
	printf("CPU : %s, %.1lf GHz\n", pc2.cpu, pc2.clock);
	printf("RAM : %d GB, SSD : %d GB, HDD : %d GB\n", pc2.ram, pc2.ssd, pc2.hdd);
	printf("Graphic : %s\n\n", pc2.vga);*/
	PrintPC(pc2);

}