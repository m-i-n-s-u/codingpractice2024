#include <iostream>

using namespace std;

int DT[1001]; // 1부터 N까지의 합을 DP를 이용한 하향식 알고리즘으로 구현. 
// DT를 사용하는 것을 '메모이제이션' 이라고 하는데, DP 동적 계획법 알고리즘(=DYNAMIC PROGRAM) 에서 핵심이 되는 기술

int f(int n) { // 1부터 n까지의 합을 DP를 사용하지 않는 하향식 알고리즘으로 구현
	if (n == 1)
		return 1;
	
	if (!DT[n]) DT[n] = f(n - 1) + n;
	
	return DT[n];

}
int main() {
	int i, m;
	cin >> m;
	for (i = 1; i <= m; i++) {
		cout << f(i) << " ";
	}

	cout << endl;
	return 0;
}