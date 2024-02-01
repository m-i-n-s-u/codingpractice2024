#include<stdio.h>

int main() {

	int array[5] = { 0 }, num, i, j, focus, sum; // focus는 다섯 숫자 중 확인할 숫자

	for (i = 0; i < 5; i++) {
		scanf_s("%d", &num);
		array[i] = num; // 숫자 5개를 array에 입력
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