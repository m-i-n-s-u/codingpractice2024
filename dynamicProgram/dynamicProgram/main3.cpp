#include <iostream>

using namespace std;

int f(int n) { // 1���� n������ ���� DP�� ������� �ʴ� ����� �˰������� ����
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