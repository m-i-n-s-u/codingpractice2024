#include <iostream>
#include <string>
using namespace std;
int main() {

	string str;
	string address("�λ�� ���ϱ� �ٴ뵿");
	string copyAddress(address); // address ���ڿ��� ������ copyaddress ��� ��Ʈ�� ��ü

	char text[] = { 'l','o','v','e' };
	string title(text); // love ���ڿ��� ���� title �̶�� ��Ʈ�� ��ü

	cout << str << endl;
	cout << address << endl;
	cout << copyAddress << endl;
	cout << title << endl;

}