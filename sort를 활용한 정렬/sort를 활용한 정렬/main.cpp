#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main() {
	int n,num;
	
	vector<int> v;
	vector<int>::iterator it;
	/*cout << "���ڸ� �� �� ������ �Է� >> ";*/
	cin >> n;
	for (int i = 0; i < n; i++) {
		/*cout << "���� �Է� >> ";*/
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end());

	/*cout << "���� ��� >> ";*/

	for ( it = v.begin() ; it != v.end(); it++) {
		cout << *it << " ";
	}



}