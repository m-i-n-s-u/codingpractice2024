#include<stdio.h>

int main() {

	int array[5] = { 0 }, num, i, j, focus, sum; // focus�� �ټ� ���� �� Ȯ���� ����

	for (i = 0; i < 5; i++) {
		scanf_s("%d", &num);
		array[i] = num; // ���� 5���� array�� �Է�
	}

	for (i = 0; i < 5; i++) {
		sum = 0;
		focus = array[i]; 

		for (j = 1; j < focus; j++) {

			if (focus % j == 0) {
				sum += j;
			}
		}
		
		if (sum == focus) {
			printf("yes\n");
		}

		else {
			printf("no\n");
		}
	}
}