#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

bool compare(string first, string second) {
	if (first.length() == second.length()) {
		return first < second;
	}
	else {
		return first.length() < second.length();
	}
}

int main() {
	int number;
	string word;
	vector<string> v;
	vector<string> ::iterator it;

	cin >> number;

	for (int i = 0;  i < number; i++) {
		cin >> word;
		v.push_back(word);
	}
	sort(v.begin(), v.end(), compare);


	for (it = v.begin(); it != v.end() ; it++) {

		if ((it != v.begin())) {
			if ((*it == *(it - 1))) {
				continue;
			}
		}

		cout << *it << endl;
	}
}