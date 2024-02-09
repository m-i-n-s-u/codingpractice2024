#include <iostream>
#include <map>

using namespace std;

map <string, int> m;

int main() {

	m.insert({ "Alice " , 100 });
	m.insert({ "Bob " , 200 });
	m.insert(make_pair( "Sam" , 300 )); // insert({,}) 대신 insert(makepair(,)) 

	if (m.find("Alice") != m.end()) {
		cout << "find" << endl;
	}
	else {
		cout << "not find" << endl;
	}

	//index 기반 auto 자동 type
	for (auto iter = m.begin(); iter != m.end(); iter++) {
		cout << iter->first << " " << iter->second << endl;
	}

	cout << endl;
	
	//범위기반
	for (auto iter : m) {
		cout << iter.first << " " << iter.second << endl;
	}

}