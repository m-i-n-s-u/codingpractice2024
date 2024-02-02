#include <iostream>
#include <queue>

using namespace std;
int main() {

	queue<int> q; // int형으로 queue 할 거고, 이를 q라고 칭하겠다.

	q.push(1);
	printf("front element : %d\n", q.front());

	q.push(2);
	printf("front element : %d\n", q.front());
	printf("back element : %d\n", q.back());

	q.push(3);
	q.push(4);
	q.push(5);
	q.push(6);

	printf("front element : %d\n", q.front());
	printf("back element : %d\n", q.back());
	q.pop();
	q.pop();
	q.pop();

	printf("front element : %d\n", q.front());
	printf("back element : %d\n", q.back());
	printf("queue size : %d\n", q.size());
	printf("Is it empty? : %s\n", (q.empty() ? "Yes" : "No"));

	return 0;



}