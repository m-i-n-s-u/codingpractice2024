#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

	int Base1, Base2, result10 = 0, length, Base3; // Base=진법 Num=data
	string Num1, Num2, Result;

	cin >> Base1 >> Num1;
	cin >> Base2 >> Num2;
	cin >> Base3;

	length = Num1.length();

	int value = length - 1; //value승

	// n진수 숫자를 10진수로 변환

	for (int i = 0; i < length; i++) {
		if (Num1[i] < 65) { // 문자가 아닐경우 (ASCII)

			result10 += (Num1[i] - '0') * pow(Base1, value); // Num1 string에서 큰의 자리수부터 int로 바꿔서 진수의 value승을 곱한다
			value--;

		}
		else { // 문자일 경우

			result10 += (Num1[i] - 'A' + 10) * pow(Base1, value); //문자인 Num1[i]을 정수형으로 바꾸고-A는 10을 뜻한다
			value--;

		}
	}

	length = Num2.length();
	value = length - 1;

	for (int i = 0; i < length; i++) {
		if (Num2[i] < 65) { // 문자가 아닐경우 (ASCII)

			result10 += (Num2[i] - '0') * pow(Base2, value); // Num1 string에서 큰의 자리수부터 int로 바꿔서 진수의 value승을 곱한다
			value--;

		}
		else { // 문자일 경우

			result10 += (Num2[i] - 'A' + 10) * pow(Base2, value); //문자인 Num1[i]을 정수형으로 바꾸고-A는 10을 뜻한다
			value--;
		}


	}


	while (result10 > 0) { // base3 진법으로 10진수를 변환

		int tmp = result10 % Base3;
		result10 /= Base3;

		if (0 <= tmp && tmp <= 9) Result += (tmp + '0'); // tmp를 char형 아스키로 변환하겠다

		else Result += ((tmp - 10) + 'A'); // 10이면 A로 출력해야함.

	}


	reverse(Result.begin(), Result.end());
	cout << Result;

	return 0;
}