#include <iostream>

using namespace std;

int DT[1001]; // 1���� N������ ���� DP�� �̿��� ����� �˰������� ����. 
// DT�� ����ϴ� ���� '�޸������̼�' �̶�� �ϴµ�, DP ���� ��ȹ�� �˰���(=DYNAMIC PROGRAM) ���� �ٽ��� �Ǵ� ���

int f(int n) { // 1���� n������ ���� DP�� ������� �ʴ� ����� �˰������� ����
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