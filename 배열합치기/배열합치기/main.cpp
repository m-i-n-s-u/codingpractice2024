#include <iostream>

using namespace std;
int main() {

	int num1, num2, insultNum, length, array1[1000] = { 0 }, array2[1000] = { 0 },i,j,temp;

	cin >> num1 >> num2;

	length = num1 + num2; // 합친 배열의 길이. 대신 포인터로 풀 수 있긴할듯? 
	
	for (i = 0; i < num1; i++) {
		cin >> insultNum;
		array1[i] = insultNum;
	}

	for (i = 0; i < num2; i++) {
		cin >> insultNum;
		array2[i] = insultNum; // 배열당 숫자 입력
	}


	for (i = num1; i < length; i++) {
		array1[i] = array2[i - num1];
	} // 무작정 합치기 



	for (i = 1; i < length; i++) {

		for (j = 0; j < length-1; j++) {

			if (array1[j] > array1[j + 1])
			{

				temp = array1[j];
				array1[j] = array1[j + 1];
				array1[j + 1] = temp;

			}

		}
	}

		for (i = 0; i < length; i++) {
			cout << array1[i] << endl;
	}

	}
	