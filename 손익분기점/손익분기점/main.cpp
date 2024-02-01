#include <stdio.h>

int main() {

	int sum, pin, change, desktop, price, count=0; // price는 판매한 값. sum은 제작한 값

	scanf_s("%d %d %d", &pin, &change, &desktop); // desktop은 노트북의 가격
	
	sum = pin + change; // 1회 생산시 고정비용+가변비용
	price = desktop; // 수입. 지금은 노트북의 가격


	while(1) {

		count++; 

		if (desktop < change) { 
			printf("-1"); 
			break;	//손익분기점이 발생하지 않을때, 즉 노트북 1대 가격이 change보다 작을때 -1
		}

		if (price > sum) { 
			printf("%d", count);
			break;	//총수입(price)이 고정비용에 가변비용을 계속 추가한 값을 넘어서면 break
		} 

		sum += change;	
		price += desktop;


	}

}