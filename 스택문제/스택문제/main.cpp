#include<iostream>
#include<stack>

using namespace std;

int main() {

	int i, num, insultNum;
	string command;

	stack<int> s;



	cin >> num;
	for (i = 0; i < num; i++) {
		cin >> command;

		if (command == "push") {
			cin >> insultNum;
			s.push(insultNum);
		}

		else if (command == "pop") {

			if (s.empty() == 1) {
				cout << "-1"<< endl;
			}

			else {
				cout << s.top() << endl;
				s.pop();
			}

		}

		else if (command == "top") {
			if (s.empty() == 1) {
				cout << "-1" << endl;
			}

			else {
				cout << s.top() << endl;
			}
		}

		else if (command == "size"){
			cout << s.size() << endl;
		}


		else if (command == "empty") {
			cout << (s.empty() ? "1" : "0") << endl;
		}

	}
}
