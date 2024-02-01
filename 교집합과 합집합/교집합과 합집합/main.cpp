#include <stdio.h>
#include <stdlib.h>

int main() {

	int i,j,insult,*array_1, *array_2, final_array[200] = { 0 },num1,num2, check = 0; 
	// final array는 걸러낸 array, insult는 대입할 값



	printf("array1의 크기를 입력하시오. ");
	scanf_s("%d", &num1);
	array_1 = (int*)malloc(sizeof(int) * num1);


	printf("array1에 숫자를 입력하시오");
	for (i = 0; i < num1; i++) {
		scanf_s("%d", &insult);
		array_1[i] = insult;		 //1번 array에 첫 배열 입력
	}



	printf("array2의 크기를 입력하시오. ");
	scanf_s("%d", &num2);
	array_2 = (int*)malloc(sizeof(int) * num2);


	printf("숫자를 삽입하시오.");
	for (j = 0; j < num2; j++) {
		scanf_s("%d", &insult);
		array_2[j] = insult;		//2번 array에 두 번째 배열 입력
	}



	//포인터를 활용하여 풀이해보자.

	//합집합일때

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