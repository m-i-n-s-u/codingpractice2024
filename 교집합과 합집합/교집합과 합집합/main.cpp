#include <stdio.h>
#include <stdlib.h>

int main() {

	int i,j,insult,*array_1, *array_2, final_array[200] = { 0 },num1,num2, check = 0; 
	// final array�� �ɷ��� array, insult�� ������ ��



	printf("array1�� ũ�⸦ �Է��Ͻÿ�. ");
	scanf_s("%d", &num1);
	array_1 = (int*)malloc(sizeof(int) * num1);


	printf("array1�� ���ڸ� �Է��Ͻÿ�");
	for (i = 0; i < num1; i++) {
		scanf_s("%d", &insult);
		array_1[i] = insult;		 //1�� array�� ù �迭 �Է�
	}



	printf("array2�� ũ�⸦ �Է��Ͻÿ�. ");
	scanf_s("%d", &num2);
	array_2 = (int*)malloc(sizeof(int) * num2);


	printf("���ڸ� �����Ͻÿ�.");
	for (j = 0; j < num2; j++) {
		scanf_s("%d", &insult);
		array_2[j] = insult;		//2�� array�� �� ��° �迭 �Է�
	}



	//�����͸� Ȱ���Ͽ� Ǯ���غ���.

	//�������϶�

	while (num1 && num2) {
		if (*array_1 < *array_2) {
			printf("%d", &array_1);
			*array_1++;
			num1--;
		}

		else if (*array_1 > *array_2) {
			printf("%d", &array_2);
			*array_2++;
			num2--;
		}

		else if (*array_1 == *array_2) {
			printf("%d", &array_1);
			*array_1++;
			*array_2++;

		}
	}


	

	
}