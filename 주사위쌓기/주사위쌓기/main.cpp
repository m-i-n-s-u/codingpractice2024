#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <stdlib.h>

using namespace std;

int main() {

	int num, array[10000][7] = { 0 }, upside, downside, value, sum=0,max=0; // num은 주사위의 개수
	cin >> num;

	vector<int> vector_sum; // 첫번째 주사위에 따른 6개의 sum값을 저장하는 용도의 벡터

	for (int i = 1; i <=num; i++) { // num개의 주사위의 형태를 입력받기
		for (int j = 1; j < 7; j++) {
			cin >> value;
			array[i][j] = value;
		}
	}
	

	//첫번째 주사위는 upside와 downside를 돌아가면서 정한다
	for (int firstdice = 1; firstdice < 7; firstdice++) {

		upside = array[1][firstdice]; // upside를 돌아가면서 설정

		switch (firstdice) { // downside는 upside에 따라 정해진다

		case 1:
			downside = array[1][6];
		case 2:
			downside = array[1][4];
		case 3:
			downside = array[1][5];
		case 4:
			downside = array[1][2];
		case 5:
			downside = array[1][3];
		case 6:
			downside = array[1][1];
		}

		for (int j = 1; j < 7; j++) {

			if ((array[1][j] > max) && (array[1][j] != upside) && (array[1][j] != downside)) {
				max = array[1][j];
			}

		}sum += max;

		//첫번째 주사위를 제외한 주사위에서의 규칙
		for (int i = 2; i <= num; i++) {

			max = 0; // 주사위가 바뀔때마다 초기화 되어야한다

			downside = *find(array[i], array[i] + 6, upside) - array[i][0]; // downside는 index

			switch (downside) { // upside는 downside의 index에 따라 정해진다.

			case 1:
				upside = array[i][6];
			case 2:
				upside = array[i][4];
			case 3:
				upside = array[i][5];
			case 4:
				upside = array[i][2];
			case 5:
				upside = array[i][3];
			case 6:
				upside = array[i][1];
			} // array는 data
			downside = array[i][downside]; // downside를 index에서 data로

			for (int j = 1; j < 7; j++) {
				//1차원배열 array[i]에서 upside와 downside를 제외한 수 중 가장 큰 수
				if ((array[i][j] > max) && (array[i][j] != upside) && (array[i][j] != downside)) {
					max = array[i][j];
				}
			}
			//한 주사위의 4면에서 가장 큰 수를 더하기
			sum += max;

		}

		vector_sum.push_back(sum); // 첫번째 주사위를 바꾸기 전에 sum 값을 저장
		cout << sum << "\n";
		sum = 0;
		max = 0; // 다음 첫번째 주사위의 max도 초기화

	}
	/*int MaxOfSum = *(max_element(vector_sum.begin(), vector_sum.end()));
	cout << MaxOfSum;*/


	return 0;
}