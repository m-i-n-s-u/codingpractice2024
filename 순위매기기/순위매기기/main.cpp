#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main() {
	int num, Array[3000], Rank[3000], Original[3000], insertNum, ranking = 1, counttype = 1, rankcount=0;;
	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> insertNum;
		Array[i] = insertNum;
	}

	memcpy(Rank, Array, sizeof(int)*num); // 배열복사
	memcpy(Original, Array, sizeof(int) * num); // 나중에 출력할 배열

	sort(Array, Array + num); // array 오름차순 정렬


	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {

			if (Array[i] == Rank[j]) {

				if (Array[i] == Array[i+1]) {

					Rank[j] = ranking;
					counttype = 0;
					rankcount++;
					
				}
				else {
					if (counttype == 1) {
						Rank[j] = ranking++; // array에서 처음 항 부터 rank에서 찾고->등수로 rank 항을 덮어씌우기
					}
					else {
						ranking+=rankcount;
						Rank[j] = ranking++;
						counttype = 1;
						rankcount = 0;
					}
					
				}

			}
		}
	}

	for (int i = 0; i < num; i++) {

		cout << Original[i] << "\t";
	}

	cout << endl;

	for (int i = 0; i < num; i++) {

		cout << Rank[i] <<"\t";
	}



}