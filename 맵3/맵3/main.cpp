#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
	map<string, string> dic;

	dic.insert({ "love", "사랑" });
	dic.insert({ "apple", "사과" });
	dic["cherry"] = "체리";

	cout << "저장된 단어 개수" << dic.size() << endl;
	string eng;
	while (true) {
		cout << "찾고싶은 단어 >> ";
		getline(cin, eng);
		if (eng == "exit") {
			break;
		}
		if (dic.find(eng) == dic.end()) { // eng의 key를 끝까지 찾았다
			cout << "없음" << endl;
		}
		else {
			cout << dic[eng] << endl;
		}
		cout << " 종료합니다 . . . " << endl;
	}
}