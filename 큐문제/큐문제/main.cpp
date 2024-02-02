#include<iostream>
#include<queue>

using namespace std;

int main() {

	int i, num, insultNum;
	string command;

	queue<int> q;


	cin >> num;
	for (i = 0; i < num; i++) {
		cin >> command;

		if (command == "push") {
			cin >> insultNum;
			q.push(insultNum);
		}

		else if (command == "pop") {

			if (q.empty() == 1) {
				cout << "-1" << endl;
			}

			else {
				cout << q.front() << endl;
				q.pop();
			}

		}

		else if (command == "front") {
			if (q.empty() == 1) {
				cout << "-1" << endl;
			}

			else {
				cout << q.front() << endl;
			}
		}

		else if (command == "back") {
			if (q.empty() == 1) {
				cout << "-1" << endl;
			}

			else {
				cout << q.back() << endl;
			}
		}


		else if (command == "size") {
			cout << q.size() << endl;
		}


		else if (command == "empty") {
			cout << (q.empty() ? "1" : "0") << endl;
		}

	}
}