#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	int switchNum, switchCondition[100] = { 0 }, StudentNum, StudentAssign[1000] = { 0 }, StudentSwitch[1000] = { 0 };

	cin >> switchNum; // 스위치의 개수
	for (int i = 0; i < switchNum; i++) {

		cin >> switchCondition[i];

	}


	cin >> StudentNum; //학생수
	for (int i = 0; i < StudentNum; i++) {

		cin >> StudentAssign[i]; // 학생 성별 입력
		cin >> StudentSwitch[i]; // 학생이 받은 스위치 번호

	}

	for (int i = 0; i < StudentNum; i++) {

		if (StudentAssign[i] == 1) { // 남학생일때

			for (int j = 1; j <= switchNum; j++) { // switch를 처음부터 끝까지 확인하면서

				if (j % (StudentSwitch[i]) == 0) { // 만약 j(번째)가 학생이 받은 스위치 번호의 배수라면

					if (switchCondition[j-1] == 0) { //상태를 바꾼다
						switchCondition[j-1] = 1;
					}

					else {
						switchCondition[j-1] = 0;
					}
				}
			}

		} // complete!!!


		else if (StudentAssign[i] == 2) { //여학생일때

			int left = StudentSwitch[i] - 1;
			int right = StudentSwitch[i] - 1; // 일단 학생이 받은 숫자 번째 스위치를 시작으로
			

			while (switchCondition[left] == switchCondition[right]) { // 양옆의 숫자가 같다면


					if (switchCondition[left] == 1) { // 숫자를 바꾼다

						switchCondition[left] = 0;
						switchCondition[right] = 0;
					}

					else if (switchCondition[left] == 0) {

						switchCondition[left] = 1;
						switchCondition[right] = 1;
					}
				


				left--; // 왼쪽으로 한칸 가는 변수
				right++; // 오른쪽으로 한칸 가는 변수



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

