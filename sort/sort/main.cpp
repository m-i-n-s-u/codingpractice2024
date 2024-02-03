#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v;

	cout << "5개의 정수를 입력하세요 >> " << endl; 
	for (int i = 0; i < 5; i++) {
		int n;
		cin >> n;
		v.push_back(n);
	}
	
	sort(v.begin(), v.end()); // begin 에서 end까지 오름차순 정렬

	vector<int> ::iterator it;

	for (it = v.begin(); it != v.end(); it++) {
		cout << *it << ' ';
	}
	cout << endl;

}