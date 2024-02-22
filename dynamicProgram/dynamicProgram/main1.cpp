#include <iostream>
using namespace std;

int f(int n) {
	
	if (n <= 2) {
		return 1;
	}
	else
		return f(n - 2) + f(n - 1); // 계산했던 값도 계속 계산하려 하므로 시간이 많이 걸린다. 
	// -> table 을 만들어 계산했던 값은 다시 계산하지 않도록 한다.
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