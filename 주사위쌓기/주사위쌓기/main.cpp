#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <stdlib.h>

using namespace std;

int main() {

	int num, array[10000][7] = { 0 }, upside, downside, value, sum=0,max=0; // num�� �ֻ����� ����
	cin >> num;

	vector<int> vector_sum; // ù��° �ֻ����� ���� 6���� sum���� �����ϴ� �뵵�� ����

	for (int i = 1; i <=num; i++) { // num���� �ֻ����� ���¸� �Է¹ޱ�
		for (int j = 1; j < 7; j++) {
			cin >> value;
			array[i][j] = value;
		}
	}
	

	//ù��° �ֻ����� upside�� downside�� ���ư��鼭 ���Ѵ�
	for (int firstdice = 1; firstdice < 7; firstdice++) {

		upside = array[1][firstdice]; // upside�� ���ư��鼭 ����

		switch (firstdice) { // downside�� upside�� ���� ��������

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

		//ù��° �ֻ����� ������ �ֻ��������� ��Ģ
		for (int i = 2; i <= num; i++) {

			max = 0; // �ֻ����� �ٲ𶧸��� �ʱ�ȭ �Ǿ���Ѵ�

			downside = *find(array[i], array[i] + 6, upside) - array[i][0]; // downside�� index

			switch (downside) { // upside�� downside�� index�� ���� ��������.

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
			} // array�� data
			downside = array[i][downside]; // downside�� index���� data��

			for (int j = 1; j < 7; j++) {
				//1�����迭 array[i]���� upside�� downside�� ������ �� �� ���� ū ��
				if ((array[i][j] > max) && (array[i][j] != upside) && (array[i][j] != downside)) {
					max = array[i][j];
				}
			}
			//�� �ֻ����� 4�鿡�� ���� ū ���� ���ϱ�
			sum += max;

		}

		vector_sum.push_back(sum); // ù��° �ֻ����� �ٲٱ� ���� sum ���� ����
		cout << sum << "\n";
		sum = 0;
		max = 0; // ���� ù��° �ֻ����� max�� �ʱ�ȭ

	}
	/*int MaxOfSum = *(max_element(vector_sum.begin(), vector_sum.end()));
	cout << MaxOfSum;*/


	return 0;
}