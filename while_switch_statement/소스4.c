#include<stdio.h>
// if 사용 문제 
int main() {
	/*
		도시락 판매 업체에서 10 개를 구매하면 9 개의 가격으로 할인하여 판매한다
		도시락 1 개의 가격이 3500 원 이라고 가정하고
		주문 수량을 입력 받아서 금액을 출력하는 코드를 작성해주세요
	*/
	int bap, sale, result;

	while (1) {
		printf("도시락 하나는 3500 원이고, 10개 주문 시 1개 금액을 할인 해드립니다\n\n");
		printf("주문하실 도시락 갯수를 입력해주세요 : ");
		scanf("%d", &bap);

		sale = bap % 10;

		if (bap > 1 && sale == 0) {
			sale = bap / 10;
			result = (bap - sale) * 3500;
			printf("\n도시락의 가격은 %d 입니다\n\n", result);
		}
		else {
			result = bap * 3500;
			printf("\n도시락의 가격은 %d 입니다\n", result);
		}
	}
}