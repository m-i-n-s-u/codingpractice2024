#include <iostream>
#include <vector>

using namespace std;

int main() {

	int num, array[1000] = { 0 },count=0;

	vector<int> line;
	vector<int> ::iterator line_number;

	cin >> num;
	for (int i = 0; i < num; i++) { // array�� �� ����� ���� ��ȣǥ�� ����
		cin >> array[i]; 
		count = array[i];
		line.insert(line.end() - array[i], i + 1);
	}

	for (line_number = line.begin(); line_number != line.end(); line_number++) {
		
		cout << *line_number;

		if (line_number != line.end() - 1) {
			cout << " ";
		}

	}

	return 0;
	

}