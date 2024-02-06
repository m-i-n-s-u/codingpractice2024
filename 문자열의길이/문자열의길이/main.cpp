#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;

	cout << "아래에 문자열을 입력하세요. 빈 칸이 있어도 됩니다. (한글은 ㄴㄴ)" << endl;

	getline(cin, s, '\n');
	int len = s.length(); // len은 스트링 s의 길이

	for (int i = 0; i < len; i++) {

		string first = s.substr(0, 1); // 문자열 분리. 슬라이싱. 여기선 맨 앞 문자 1개를 '문자열'로 분리
		string sub = s.substr(1, len - 1); //나머지 문자들을 문자열로 분리. len-1인이유는 null문자 때문인가?
		
		s = sub + first;
		cout << s << endl;




	}

}