#include <iostream>
#include <map>

using namespace std;

map <string, int> m;

int main() {

	m.insert({ "Alice " , 100 });
	m.insert({ "Bob " , 200 });
	m.insert(make_pair( "Sam" , 300 )); // insert({,}) ��� insert(makepair(,)) 

	if (m.find("Alice") != m.end()) {
		cout << "find" << endl;
	}
	else {
		cout << "not find" << endl;
	}

	//index ��� auto �ڵ� type
	for (auto iter = m.begin(); iter != m.end(); iter++) {
		cout << iter->first << " " << iter->second << endl;
	}

	cout << endl;
	
	//�������
	for (auto iter : m) {
		cout << iter.first << " " << iter.second << endl;
	}

}