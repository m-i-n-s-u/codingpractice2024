#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main() {
	int n,num;
	
	vector<int> v;
	vector<int>::iterator it;
	/*cout << "숫자를 몇 개 넣을지 입력 >> ";*/
	cin >> n;
	for (int i = 0; i < n; i++) {
		/*cout << "숫자 입력 >> ";*/
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end());

	/*cout << "숫자 출력 >> ";*/

	for ( it = v.begin() ; it != v.end(); it++) {
		cout << *it << " ";
	}



}