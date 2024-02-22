#include <iostream>

using namespace std;

int f(int n) { // 1부터 n까지의 합을 DP를 사용하지 않는 하향식 알고리즘으로 구현
	if (n == 1) return 1;

	return f(n - 1) + n;
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