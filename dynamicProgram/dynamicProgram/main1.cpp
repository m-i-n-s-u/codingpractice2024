#include <iostream>
using namespace std;

int f(int n) {
	
	if (n <= 2) {
		return 1;
	}
	else
		return f(n - 2) + f(n - 1); // ����ߴ� ���� ��� ����Ϸ� �ϹǷ� �ð��� ���� �ɸ���. 
	// -> table �� ����� ����ߴ� ���� �ٽ� ������� �ʵ��� �Ѵ�.
}


int main()
{
	//����Լ��� �̿��� �Ǻ���ġ ����

	int i, m;
	cin >> m;
	for (i = 1; i <= m; i++) {
		cout << f(i) << ' ';

	}
	cout << endl;

	return 0;
}