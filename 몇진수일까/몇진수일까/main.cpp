#include <iostream>
#include <string>
#include<cstring>
#include <algorithm>

using namespace std;

int main() {

	int result1 = 0, result2=0, length, correct = 0; // Base=진법 Num=data
	string Num1, Num2, Real_Result1, Real_Result2;

	cin >> Num1;
	cin >> Num2;

	length = Num1.length();
	int value = length - 1; //value승


	// n진수 숫자를 10진수로 변환
	for (int Base1 = 2; Base1 < 37; Base1++) {

		for (int Base2 = 2; Base2 < 37; Base2++) {

			// num1,num2의 진법을 확정하고 들어갔음

			for (int i = 0; i < length; i++) { // num1을 10진수로 바꾸는 작업->result1

				if (Num1[i] < 65) { // 문자가 아닐경우 (ASCII)

					result1 += (Num1[i] - '0') * pow(Base1, value); // Num1 string에서 큰의 자리수부터 int로 바꿔서 진수의 value승을 곱한다
					value--;

				}
				else { // 문자일 경우

					result1 += (Num1[i] - 'A' + 10) * pow(Base1, value); //문자인 Num1[i]을 정수형으로 바꾸고-A는 10을 뜻한다
					value--;

				}
			}

			length = Num2.length();
			value = length - 1;

			for (int i = 0; i < length; i++) { // num2을 10진수로 바꾸는 작업->result2

				if (Num2[i] < 65) { // 문자가 아닐경우 (ASCII)

					result2 += (Num2[i] - '0') * pow(Base2, value); // Num1 string에서 큰의 자리수부터 int로 바꿔서 진수의 value승을 곱한다
					value--;

				}
				else { // 문자일 경우

					result2 += (Num2[i] - 'A' + 10) * pow(Base2, value); //문자인 Num1[i]을 정수형으로 바꾸고-A는 10을 뜻한다
					value--;
				}

			}



			while (result1 > 0) { // base1 진법으로 10진수를 변환

				int tmp = result1 % Base1;
				result1 /= Base1;

				if (0 <= tmp && tmp <= 9) Real_Result1 += (tmp + '0'); // tmp를 char형 (아스키)로 변환하겠다

				else Real_Result1 += ((tmp - 10) + 'A'); // 10이면 A로 출력해야함.

			}

			while (result2 > 0) { // base2 진법으로 10진수를 변환

				int tmp = result2 % Base2;
				result1 /= Base2;

				if (0 <= tmp && tmp <= 9) Real_Result2 += (tmp + '0'); // tmp를 char형 아스키로 변환하겠다

				else Real_Result2 += ((tmp - 10) + 'A'); // 10이면 A로 출력해야함.

			}


			if (Real_Result1.compare(Real_Result2) == 0){ // 변환값이 같으면 진법을 출력하고 break 

				cout << Base1 <<" "<< Base2; // 각각의 최소 진법을 출력한다
				correct = 1;

				break;
			}




		}

		if (correct == 1) break;
	

	}

	if (correct == 1) cout << "0 0";

	return 0;


}