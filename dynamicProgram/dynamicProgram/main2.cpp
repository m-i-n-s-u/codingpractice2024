#include <iostream>
using namespace std;

int DT[10000001]; // DP를 이용한 피보나치 수열

int f(int n) {

	if (n <= 2) {
		return 1; //return하면 함수를 빠져나온다.
	}
	if (!DT[n]) DT[n] = f(n - 1) + f(n - 2); // dynamic table 안에 값이 없으면 계산을 진행한다. 
	
	return DT[n];
}


int main()
{
	//재귀함수를 이용한 피보나치 수열

	int i, m;
	cin >> m;
	for (i = 1; i <= m; i++) {
		cout << f(i) << ' ';

	}
	cout << endl;

	return 0;
}