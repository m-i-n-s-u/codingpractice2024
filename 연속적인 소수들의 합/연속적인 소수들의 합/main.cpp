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
//int DecimalCalculate:: RealCalculator() { // �Ҽ����� �Ǻ��ϴ� �Լ�
//	int i=0;
//
//	for ( i = 2; i <= number; i++) { // �ش� ���� �Ҽ����� �Ǻ��ϴ� �ڵ�
//
//		if (number % i == 0) {
//			break; // ������ �������� ���� ������ break
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

	for (int i = 2; i <= num; i++) { // �Ҽ���, push_back �Ѵ�. i~num �� �Ҽ��� ���ڰ� �ִ��� Ȯ���ϱ�
		for (j = 2; j < i; j++) { // �Ҽ����� �Ǻ��ϱ� ����, ���������� ��

			if (i % j == 0) {
				break; // ������ �������� ���� ������ break
			}
		}

		if (i == j || i == 2) { //������ �������� ���� ������ push_back. 2�� �Ҽ�.
			Decimal.push_back(i); // �Ҽ��� ����ִ� ���͸� �ϼ�
		}
	}

		
		//isitdecimal.number = i; // realcalculator �ȿ��ִ� number ���� i�� ����
		//int check = isitdecimal.RealCalculator(); // realcalculator return ���� check�� ����. 
		////"�Ҽ��� check�� ����, �ƴϸ� X"

		//Decimal.push_back(check); // �Ҽ��� ����ִ� ���Ͱ� �ϼ�

	for (DecimalNumber = Decimal.begin(); DecimalNumber != Decimal.end(); DecimalNumber++) { // "����" �ϴ� ���� ����
		for (DecimalNumber2 = DecimalNumber; DecimalNumber2 != Decimal.end(); DecimalNumber2++) { 
			// �����ϴ� �� ���� "�ϴ�"������. �ι�° ���� ���������ҵ�.

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