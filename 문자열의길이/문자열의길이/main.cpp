#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;

	cout << "�Ʒ��� ���ڿ��� �Է��ϼ���. �� ĭ�� �־ �˴ϴ�. (�ѱ��� ����)" << endl;

	getline(cin, s, '\n');
	int len = s.length(); // len�� ��Ʈ�� s�� ����

	for (int i = 0; i < len; i++) {

		string first = s.substr(0, 1); // ���ڿ� �и�. �����̽�. ���⼱ �� �� ���� 1���� '���ڿ�'�� �и�
		string sub = s.substr(1, len - 1); //������ ���ڵ��� ���ڿ��� �и�. len-1�������� null���� �����ΰ�?
		
		s = sub + first;
		cout << s << endl;




	}

}