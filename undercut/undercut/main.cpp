#include <iostream>
#include <stdio.h>
using namespace std;
int Ascore = 0, Bscore = 0;

int Rule1(int Aperson, int Bperson) {

	if (Aperson < Bperson) {
		Ascore += Aperson + Bperson;
	}
	else {
		Bscore += Bperson + Aperson;
	}

	return 0;
}

int Rule2(int Aperson, int Bperson) {

	if (Aperson == 1) {
		Ascore += 6;
	}
	else {
		Bscore += 6;
	}

	return 0;

}

int Rule3(int Aperson, int Bperson) {

	if (Aperson > Bperson) {
		Ascore += Aperson;
	}
	else {
		Bscore += Bperson;
	}

	return 0;

}

int main() {
	int num, Card; // 20이하의 라운드 횟수
	int Aperson[20], Bperson[20];

	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> Card;
		Aperson[i] = Card;
	}

	for (int i = 0; i < num; i++) {
		cin >> Card;
		Bperson[i] = Card;
	}


	for (int i = 0; i < num; i++) {
		if (abs(Aperson[i] - Bperson[i]) == 1) { // rule1 (rule2)

			if ((Aperson[i] == 1 && Bperson[i] == 2) || (Aperson[i] == 2 && Bperson[i] == 1)) { // rule2
				
				Rule2(Aperson[i], Bperson[i]);

				continue;

			}

			Rule1(Aperson[i], Bperson[i]);
		}

		else if (abs(Aperson[i] - Bperson[i]) > 1) {
			
			Rule3(Aperson[i], Bperson[i]);

		}


		
	}
	cout << Ascore << " " << Bscore;
		


}