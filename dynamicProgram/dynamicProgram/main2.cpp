#include <iostream>
using namespace std;

int DT[10000001]; // DP�� �̿��� �Ǻ���ġ ����

int f(int n) {

	if (n <= 2) {
		return 1; //return�ϸ� �Լ��� �������´�.
	}
	if (!DT[n]) DT[n] = f(n - 1) + f(n - 2); // dynamic table �ȿ� ���� ������ ����� �����Ѵ�. 
	
	return DT[n];
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