#include <iostream>
#include <string>
#include<cstring>
#include <algorithm>

using namespace std;

int main() {

	int result1 = 0, result2=0, length, correct = 0; // Base=���� Num=data
	string Num1, Num2, Real_Result1, Real_Result2;

	cin >> Num1;
	cin >> Num2;

	length = Num1.length();
	int value = length - 1; //value��


	// n���� ���ڸ� 10������ ��ȯ
	for (int Base1 = 2; Base1 < 37; Base1++) {

		for (int Base2 = 2; Base2 < 37; Base2++) {

			// num1,num2�� ������ Ȯ���ϰ� ����

			for (int i = 0; i < length; i++) { // num1�� 10������ �ٲٴ� �۾�->result1

				if (Num1[i] < 65) { // ���ڰ� �ƴҰ�� (ASCII)

					result1 += (Num1[i] - '0') * pow(Base1, value); // Num1 string���� ū�� �ڸ������� int�� �ٲ㼭 ������ value���� ���Ѵ�
					value--;

				}
				else { // ������ ���

					result1 += (Num1[i] - 'A' + 10) * pow(Base1, value); //������ Num1[i]�� ���������� �ٲٰ�-A�� 10�� ���Ѵ�
					value--;

				}
			}

			length = Num2.length();
			value = length - 1;

			for (int i = 0; i < length; i++) { // num2�� 10������ �ٲٴ� �۾�->result2

				if (Num2[i] < 65) { // ���ڰ� �ƴҰ�� (ASCII)

					result2 += (Num2[i] - '0') * pow(Base2, value); // Num1 string���� ū�� �ڸ������� int�� �ٲ㼭 ������ value���� ���Ѵ�
					value--;

				}
				else { // ������ ���

					result2 += (Num2[i] - 'A' + 10) * pow(Base2, value); //������ Num1[i]�� ���������� �ٲٰ�-A�� 10�� ���Ѵ�
					value--;
				}

			}



			while (result1 > 0) { // base1 �������� 10������ ��ȯ

				int tmp = result1 % Base1;
				result1 /= Base1;

				if (0 <= tmp && tmp <= 9) Real_Result1 += (tmp + '0'); // tmp�� char�� (�ƽ�Ű)�� ��ȯ�ϰڴ�

				else Real_Result1 += ((tmp - 10) + 'A'); // 10�̸� A�� ����ؾ���.

			}

			while (result2 > 0) { // base2 �������� 10������ ��ȯ

				int tmp = result2 % Base2;
				result1 /= Base2;

				if (0 <= tmp && tmp <= 9) Real_Result2 += (tmp + '0'); // tmp�� char�� �ƽ�Ű�� ��ȯ�ϰڴ�

				else Real_Result2 += ((tmp - 10) + 'A'); // 10�̸� A�� ����ؾ���.

			}


			if (Real_Result1.compare(Real_Result2) == 0){ // ��ȯ���� ������ ������ ����ϰ� break 

				cout << Base1 <<" "<< Base2; // ������ �ּ� ������ ����Ѵ�
				correct = 1;

				break;
			}




		}

		if (correct == 1) break;
	

	}

	if (correct == 1) cout << "0 0";

	return 0;


}