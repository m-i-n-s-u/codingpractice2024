#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	int switchNum, switchCondition[100] = { 0 }, StudentNum, StudentAssign[1000] = { 0 }, StudentSwitch[1000] = { 0 };

	cin >> switchNum; // ����ġ�� ����
	for (int i = 0; i < switchNum; i++) {

		cin >> switchCondition[i];

	}


	cin >> StudentNum; //�л���
	for (int i = 0; i < StudentNum; i++) {

		cin >> StudentAssign[i]; // �л� ���� �Է�
		cin >> StudentSwitch[i]; // �л��� ���� ����ġ ��ȣ

	}

	for (int i = 0; i < StudentNum; i++) {

		if (StudentAssign[i] == 1) { // ���л��϶�

			for (int j = 1; j <= switchNum; j++) { // switch�� ó������ ������ Ȯ���ϸ鼭

				if (j % (StudentSwitch[i]) == 0) { // ���� j(��°)�� �л��� ���� ����ġ ��ȣ�� ������

					if (switchCondition[j-1] == 0) { //���¸� �ٲ۴�
						switchCondition[j-1] = 1;
					}

					else {
						switchCondition[j-1] = 0;
					}
				}
			}

		} // complete!!!


		else if (StudentAssign[i] == 2) { //���л��϶�

			int left = StudentSwitch[i] - 1;
			int right = StudentSwitch[i] - 1; // �ϴ� �л��� ���� ���� ��° ����ġ�� ��������
			

			while (switchCondition[left] == switchCondition[right]) { // �翷�� ���ڰ� ���ٸ�


					if (switchCondition[left] == 1) { // ���ڸ� �ٲ۴�

						switchCondition[left] = 0;
						switchCondition[right] = 0;
					}

					else if (switchCondition[left] == 0) {

						switchCondition[left] = 1;
						switchCondition[right] = 1;
					}
				


				left--; // �������� ��ĭ ���� ����
				right++; // ���������� ��ĭ ���� ����



			}

		}


	}

	for (int i = 0; i < switchNum; i++) {

		cout << switchCondition[i] << " ";
		
		if (i % 20 == 0) {
			cout << endl;
		}

	}
}

