#include <iostream>
#include <stack>

using namespace std;
int main() {

	stack<int> s; // int�� ������ �� �Ű�, �̸� s��� Ī�ϰڴ�

	s.push(3);
	s.push(2);
	s.push(1);

	printf("top element : %d\n", s.top());
	s.pop();

	printf("top element : %d\n", s.top());
	s.pop();

	printf("stack size %d \n", s.size());
	printf("Is it empty? : %s\n", (s.empty() ? "Yes" : "No")); // ��������� true, �ƴϸ� false 

	return 0;


}
