#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

	int Base1, Base2, result10 = 0, length, Base3; // Base=���� Num=data
	string Num1, Num2, Result;

	cin >> Base1 >> Num1;
	cin >> Base2 >> Num2;
	cin >> Base3;

	length = Num1.length();

	int value = length - 1; //value��

	// n���� ���ڸ� 10������ ��ȯ

	for (int i = 0; i < length; i++) {
		if (Num1[i] < 65) { // ���ڰ� �ƴҰ�� (ASCII)

			result10 += (Num1[i] - '0') * pow(Base1, value); // Num1 string���� ū�� �ڸ������� int�� �ٲ㼭 ������ value���� ���Ѵ�
			value--;

		}
		else { // ������ ���

			result10 += (Num1[i] - 'A' + 10) * pow(Base1, value); //������ Num1[i]�� ���������� �ٲٰ�-A�� 10�� ���Ѵ�
			value--;

		}
	}

	length = Num2.length();
	value = length - 1;

	for (int i = 0; i < length; i++) {
		if (Num2[i] < 65) { // ���ڰ� �ƴҰ�� (ASCII)

			result10 += (Num2[i] - '0') * pow(Base2, value); // Num1 string���� ū�� �ڸ������� int�� �ٲ㼭 ������ value���� ���Ѵ�
			value--;

		}
		else { // ������ ���

			result10 += (Num2[i] - 'A' + 10) * pow(Base2, value); //������ Num1[i]�� ���������� �ٲٰ�-A�� 10�� ���Ѵ�
			value--;
		}


	}


	while (result10 > 0) { // base3 �������� 10������ ��ȯ

		int tmp = result10 % Base3;
		result10 /= Base3;

		if (0 <= tmp && tmp <= 9) Result += (tmp + '0'); // tmp�� char�� �ƽ�Ű�� ��ȯ�ϰڴ�

		else Result += ((tmp - 10) + 'A'); // 10�̸� A�� ����ؾ���.

	}


	reverse(Result.begin(), Result.end());
	cout << Result;

	return 0;
}