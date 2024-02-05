#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	int n;
	string alphabet;
	vector<string> v;
	vector<string> ::iterator it;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> alphabet;
		v.push_back(alphabet);
	}
	sort(v.begin(), v.end());
	
	int count = 0;

	for (it = v.begin(); it != v.end(); it++) {

		cout << *it << endl;

	}

}