#include <iostream>
#include <string>
using namespace std;
int main() {

	string str;
	string address("부산시 사하구 다대동");
	string copyAddress(address); // address 문자열을 복사한 copyaddress 라는 스트링 객체

	char text[] = { 'l','o','v','e' };
	string title(text); // love 문자열을 가진 title 이라는 스트링 객체

	cout << str << endl;
	cout << address << endl;
	cout << copyAddress << endl;
	cout << title << endl;

}