#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(int i, int j) {
	return i > j;
}

int main() {
	int n;
	vector <int> v;
	vector <int> ::iterator it;

	for (int i = 0; i < 10; i++) {

		cin >> n;
		v.push_back(n);

	}

	cout << "\n";
	for (it = v.begin(); it != v.end(); it++) {
		printf("%d", *it);
	}
	cout <<  "\n\n";
	sort(v.begin(), v.end()); // 오름차순 정리

	cout << "\n";
	for (it = v.begin(); it != v.end(); it++) {
		cout << *it << ' ';
	}
	cout << "\n";
	sort(v.begin(), v.end(), compare); // 내림차순 정리

	cout << "\n";
	for (it = v.begin(); it != v.end(); it++) {
		cout << *it << ' ';
	}
	cout << "\n";

}