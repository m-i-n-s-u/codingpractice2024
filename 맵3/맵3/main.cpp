#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
	map<string, string> dic;

	dic.insert({ "love", "���" });
	dic.insert({ "apple", "���" });
	dic["cherry"] = "ü��";

	cout << "����� �ܾ� ����" << dic.size() << endl;
	string eng;
	while (true) {
		cout << "ã����� �ܾ� >> ";
		getline(cin, eng);
		if (eng == "exit") {
			break;
		}
		if (dic.find(eng) == dic.end()) { // eng�� key�� ������ ã�Ҵ�
			cout << "����" << endl;
		}
		else {
			cout << dic[eng] << endl;
		}
		cout << " �����մϴ� . . . " << endl;
	}
}