#include<iostream>
#include<string>

using namespace std;
int main() {

	int n, result = 1, i, count[100] = { 0 };


	for (i = 0; i < 3; i++) {
		cin >> n;
		result *= n;
	}

	string number = to_string(result);

	for (char ch : number) {
		count[(ch-'0')-1]++;
		}

	for (i = 0; i < 9 ; i ++){
		cout << count[i] << endl;
	}

	return 0;


}