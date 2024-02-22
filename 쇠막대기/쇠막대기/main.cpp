#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int count = 0, answer = 0;
	string stk;
	vector<char> v;

	getline(cin,stk); // 막대와 레이저를 입력받는다.

	for (char i : stk) { //stick 안에 있는 문자를 하나씩
		v.push_back(i); //벡터에 넣는다.
	}

	for (auto iterator = v.begin(); iterator != v.end(); iterator++) { // iterator이 벡터를 훑으면서.
		// 마지막엔 null값이 들어있을것이다.

		if (*iterator == '(' && *(iterator + 1) == ')') { // ()꼴이면 레이저
			answer += count;
		}
		else if (*iterator == '(') { // ((꼴이면
			count++;
		}
		else if (*iterator == ')' && *(iterator - 1) != '(') { // )) 꼴이면, 레이저를 닫은게 아니라면
			count--;
			answer++;
		}

	}

	cout <<answer;

}