#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int count = 0, answer = 0;
	string stk;
	vector<char> v;

	getline(cin,stk); // ����� �������� �Է¹޴´�.

	for (char i : stk) { //stick �ȿ� �ִ� ���ڸ� �ϳ���
		v.push_back(i); //���Ϳ� �ִ´�.
	}

	for (auto iterator = v.begin(); iterator != v.end(); iterator++) { // iterator�� ���͸� �����鼭.
		// �������� null���� ����������̴�.

		if (*iterator == '(' && *(iterator + 1) == ')') { // ()���̸� ������
			answer += count;
		}
		else if (*iterator == '(') { // ((���̸�
			count++;
		}
		else if (*iterator == ')' && *(iterator - 1) != '(') { // )) ���̸�, �������� ������ �ƴ϶��
			count--;
			answer++;
		}

	}

	cout <<answer;

}