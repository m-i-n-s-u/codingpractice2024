#include <iostream>
#include <stack>

using namespace std;
int main() {

	stack<int> s; // int형 스택을 할 거고, 이를 s라고 칭하겠다

	s.push(3);
	s.push(2);
	s.push(1);

	printf("top element : %d\n", s.top());
	s.pop();

	printf("top element : %d\n", s.top());
	s.pop();

	printf("stack size %d \n", s.size());
	printf("Is it empty? : %s\n", (s.empty() ? "Yes" : "No")); // 비어있으면 true, 아니면 false 

	return 0;


}
