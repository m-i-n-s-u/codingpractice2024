#include <stdio.h>

int main() {

	int sum, pin, change, desktop, price, count=0; // price�� �Ǹ��� ��. sum�� ������ ��

	scanf_s("%d %d %d", &pin, &change, &desktop); // desktop�� ��Ʈ���� ����
	
	sum = pin + change; // 1ȸ ����� �������+�������
	price = desktop; // ����. ������ ��Ʈ���� ����


	while(1) {

		count++; 

		if (desktop < change) { 
			printf("-1"); 
			break;	//���ͺб����� �߻����� ������, �� ��Ʈ�� 1�� ������ change���� ������ -1
		}

		if (price > sum) { 
			printf("%d", count);
			break;	//�Ѽ���(price)�� ������뿡 ��������� ��� �߰��� ���� �Ѿ�� break
		} 

		sum += change;	
		price += desktop;


	}

}