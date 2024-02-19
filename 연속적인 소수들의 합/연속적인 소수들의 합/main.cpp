#include <iostream>
#include <vector>

using namespace std;

//class DecimalCalculate{
//
//public:
//	int number;
//	int RealCalculator();
//
//};
//
//int DecimalCalculate:: RealCalculator() { // 소수인지 판별하는 함수
//	int i=0;
//
//	for ( i = 2; i <= number; i++) { // 해당 값이 소수인지 판별하는 코드
//
//		if (number % i == 0) {
//			break; // 나누어 떨어지는 값이 있으면 break
//		}
//	}
//
//	if (i == number || number == 2) {
//		return i;
//	}
//
//	else {
//		return 0;
//	}
//
//}


int main() {
	int num, sum = 0, count = 0,j = 0;

	vector <int> Decimal;
	vector <int> ::iterator DecimalNumber;
	vector <int> ::iterator DecimalNumber2;

	/*DecimalCalculate isitdecimal;*/

	cin >> num;

	for (int i = 2; i <= num; i++) { // 소수면, push_back 한다. i~num 중 소수인 숫자가 있는지 확인하기
		for (j = 2; j < i; j++) { // 소수인지 판별하기 위해, 나누어지는 수

			if (i % j == 0) {
				break; // 나누어 떨어지는 값이 있으면 break
			}
		}

		if (i == j || i == 2) { //나누어 떨어지는 값이 없으면 push_back. 2는 소수.
			Decimal.push_back(i); // 소수만 들어있는 벡터를 완성
		}
	}

		
		//isitdecimal.number = i; // realcalculator 안에있는 number 값에 i를 대입
		//int check = isitdecimal.RealCalculator(); // realcalculator return 값을 check에 대입. 
		////"소수면 check에 대입, 아니면 X"

		//Decimal.push_back(check); // 소수만 들어있는 벡터가 완성

	for (DecimalNumber = Decimal.begin(); DecimalNumber != Decimal.end(); DecimalNumber++) { // "시작" 하는 수를 지정
		for (DecimalNumber2 = DecimalNumber; DecimalNumber2 != Decimal.end(); DecimalNumber2++) { 
			// 시작하는 수 부터 "일단"끝까지. 두번째 항은 생략가능할듯.

			sum += *DecimalNumber2;

			if (sum == num) {
				count++;
				sum = 0;
				break;
			}
			if (sum > num) {
				sum = 0;
				break;
			}
		}

	}
	cout << count;
	return 0;
}